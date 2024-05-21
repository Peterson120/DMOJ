using System;
public class AlpacaShapes
{
    public static void Main(string[] args)
    {
        string input = Console.ReadLine();
        string[] nums = input.Split(' ');
        double square = Math.Pow(Convert.ToInt32(nums[0]),2);
        double circle = 3.14*(Math.Pow(Convert.ToInt32(nums[1]),2));

        if(square>circle) 
        {
            Console.WriteLine("SQUARE");
        }
        else 
        {
            Console.WriteLine("CIRCLE");
        }
    }
}