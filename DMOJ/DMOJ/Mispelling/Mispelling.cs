using System;
class Mispelling
{
	public static void Main(string[] args)
	{
		int numLines = Int32.Parse(Console.ReadLine());
		string[] arr = new string[numLines];
		string[] temp = new string[2];
		string j;
		int k;
		for (int i = 0; i < numLines; i++)
		{
			j = Console.ReadLine();
			temp = j.Split(" ",2);
			k = Int32.Parse(temp[0]-1);
			arr[i] = temp[1].Remove(k,1);
		}

		for (int i = 0; i < arr.Length; i++)
			Console.WriteLine((i+1) + " " + arr[i]);
	}
}
