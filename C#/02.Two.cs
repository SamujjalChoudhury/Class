using System;

class Program
{

    static double calculate_price(int amount, double discount)
    {
        double price = (double)(discount/100) * amount;
        return (double)amount-price;
    }

    static void Main(string[] args)
    {
       Console.Write("Purchase amount(INT): ");
       var initial_amount = Convert.ToInt32(Console.ReadLine());

       var ch = 99;
       double mill_cloth;
       double handloom;


       if(initial_amount>=0 && initial_amount<=100){
           ch = 1;
       }
       else if(initial_amount>100 && initial_amount<=200){
           ch = 2;
       }
       else if(initial_amount>200 && initial_amount<=300){
           ch = 3;
       }
       else if(initial_amount>300){
           ch = 4;
       }


       switch (ch)
       {
           case 1:
                mill_cloth = (float) initial_amount;
                handloom = calculate_price(initial_amount, 5);
                break;

           case 2:
                mill_cloth = calculate_price(initial_amount, 5);
                handloom = calculate_price(initial_amount, 7);
                break;

           case 3:
                mill_cloth = calculate_price(initial_amount, 7.5);
                handloom = calculate_price(initial_amount, 10);
                break;

           case 4:
                mill_cloth = calculate_price(initial_amount, 10);
                handloom = calculate_price (initial_amount, 15);
                break;

           default:
                Console.WriteLine("End Program");
                return;
       }
       
       Console.WriteLine("Mill Cloth : {0}", mill_cloth);
       Console.WriteLine("Handloom: {0}", handloom);

    }
}


// SasmujjalChoudhury