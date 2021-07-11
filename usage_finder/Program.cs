using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Threading.Tasks;
using System.Net.Http.Json;
using System.Text.Json;
using System.Text.RegularExpressions;

namespace usage_finder
{
	class FunctionInfo
	{
		public string Script { get; set; }
		public int Line { get; set; }
		public string Code { get; set; }
	}

	class Program
	{
		public static async Task<Dictionary<string, string>> GetNativeNameMap()
		{
			Dictionary<string, string> result = new();
			using var client = new HttpClient();

			var response = await client.GetAsync("https://raw.githubusercontent.com/alloc8or/gta5-nativedb-data/master/natives.json");
			response.EnsureSuccessStatusCode();

			var json = await response.Content.ReadFromJsonAsync<JsonElement>();
			foreach (var ns in json.EnumerateObject())
			{
				foreach (var native in ns.Value.EnumerateObject())
				{
					var name = native.Value.GetProperty("name").GetString();
					if (name != null)
					{
						result[name] = native.Name;
					}
				}
			}

			return result;
		}

		public static void GetFunctionsFromFile(FileInfo file, List<FunctionInfo> functions)
		{
			var lines = File.ReadAllLines(file.FullName);

			var functionStart = 0;
			for (var i = 0; i < lines.Length; ++i)
			{
				var line = lines[i];

				if (line.Length == 0)
					continue;

				var firstChar = line[0];

				if (firstChar >= 'a' && firstChar <= 'z')
				{
					functionStart = i;
				}
				else if (firstChar == '}' && (i - functionStart) <= 32)
				{
					functions.Add(new FunctionInfo
					{
						Script = file.Name,
						Line = functionStart + 1,
						Code = string.Join("\n", lines.Skip(functionStart).Take(i - functionStart + 1).ToArray())
							.Replace("\t", "  ")
					});
				}
			}
		}

		public static List<FunctionInfo> GetFunctions(string directoryPath)
		{
			List<FunctionInfo> result = new();
			var files = Directory.EnumerateFiles(directoryPath)
				.Select(path => new FileInfo(path))
				.Where(file => file.Extension == ".c")
				.ToArray();

			var i = 0;
			foreach (var file in files)
			{
				++i;
				var percent = Math.Round((double)i / files.Length * 100);
				Console.WriteLine($"Loading {file.Name} [{percent}%]");
				GetFunctionsFromFile(file, result);
			}

			return result;
		}

		//public static FunctionInfo? FindUsageForNative(string name, List<FunctionInfo> functions)
		//{
		//	return functions.Find(fn => fn.Code.IndexOf(name) != -1);
		//}

		//public static void SaveUsageForNative(string hash, string name, string outputDirectory, List<FunctionInfo> functions)
		//{
		//	var usage = FindUsageForNative(name, functions);
		//	if (usage == null)
		//		return;

		//	using var file = File.CreateText($"{outputDirectory}/{hash}.c");
		//	file.WriteLine($"// {usage.Script} @ L{usage.Line}");
		//	file.Write(usage.Code);
		//	file.Close();
		//}

		public static void SaveUsageForNative(string hash, string outputDirectory, FunctionInfo usage)
		{
			using var file = File.CreateText($"{outputDirectory}/{hash}.c");
			file.WriteLine($"// {usage.Script} @ L{usage.Line}");
			file.Write(usage.Code);
			file.Close();
		}

		public static void FindUsages(List<FunctionInfo> functions, Dictionary<string, string> nameMap, string outputDirectory)
		{
			HashSet<string> savedNatives = new();

			foreach (var function in functions)
			{
				foreach (Match match in Regex.Matches(function.Code, @"\w+::(\w+)", RegexOptions.None))
				{
					var native = match.Groups[1].Value;
					if (!savedNatives.Contains(native) && nameMap.ContainsKey(native))
					{
						SaveUsageForNative(nameMap[native], outputDirectory, function);
						savedNatives.Add(native);
					}
				}
			}
		}

		static void Main(string[] args)
		{
			var nameMap = GetNativeNameMap().Result;
			var functions = GetFunctions(args[0]);

			FindUsages(functions, nameMap, args[1]);
		}
	}
}
