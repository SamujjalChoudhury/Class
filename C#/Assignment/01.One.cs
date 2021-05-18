using System;

// First class to print "C Sharp"
class One
{
    public void display()
    {
        System.Console.Write("C Sharp ");
        return;
    }
}

// Second Class to print "Programming"
class Two
{
    public void display()
    {
        System.Console.WriteLine("Programming");
        return;
    }
}

class Program
    {
    static void Main(string[] args)
    {
        One one = new One();
        Two two  = new Two();
            
        one.display();
        two.display();
    }
}


// SamujjalChoudhury