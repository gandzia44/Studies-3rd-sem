using System;
namespace Graph_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            const int columns = 10;
            int a;
            int[] values = new int[columns];
            int max = 0;
            for (int i = 0; i < columns; i++)
            {
                a = Convert.ToInt32(Console.ReadLine());
                if (a >= 0)
                {
                    values[i] = a;
                }
                else
                {
                    Console.WriteLine("Input an positive integer");
                    i--;
                }
                if (a > max)
                {
                    max = a;
                }
            }

            for (int r = 0; r < max; ++r)
            {
                Console.Write(((max-r).ToString()).PadLeft(4));
                for (int c = 0; c < columns; ++c)
                    if(r+values[c] >= max)
                    {
                        Console.Write("*");
                    }
                    else
                    {
                        Console.Write(" ");
                    }
                Console.Write("\n");
            }
            Console.Write("---- +");
            for (int i = 0; i < columns; i++)
            {
                Console.Write("-");
            }
            Console.Write("\n");
        }
    }
}
