using System;

class Program
    {
    static void space(int m)
    {
        while(m-- > 0)
            Console.Write(" ");
    }

    static void Main(string[] args)
    {
        Console.Write("Enter n(int): ");
        int n = Convert.ToInt32(Console.ReadLine());

        Console.Write("0");
        space(n);
        Console.Write("0");
    }
}


// SamujjalChoudhury