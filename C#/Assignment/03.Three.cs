using System;

class Program
{
    static void Main(string[] args)
    {
       Console.Write("Enter Number(INT): ");
       long num = Convert.ToInt32(Console.ReadLine());
       long rev = 0, rem;

       while(num!=0)      
       {      
        rem = num % 10;        
        rev = rev * 10 + rem;      
        num/=10;      
       }

       Console.WriteLine("Reversed Number: {0}", rev);

    }
}


// SasmujjalChoudhury