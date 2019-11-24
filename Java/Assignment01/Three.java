/*
----------------------------------------------------------------------------------------------------------
| Create a constructor for the Delivery class that accepts arguments for the year, delivery number within |
| the year, delivery distance code, and weight of the package. The constructor determines the eight-digit |
| delivery number and delivery fee. Also include a method that displays every Delivery object field.      |
----------------------------------------------------------------------------------------------------------
*/

import java.util.Scanner;


class Three{
	public static void main(String[] args) {

		Scanner sc  = new Scanner(System.in);

		System.out.print("Enter Delivery year : ");
		int year = sc.nextInt();

		System.out.print("Enter delivery number : ");
		int num = sc.nextInt();

		System.out.print("Enter delivery distance code (for local 1 and for long distance 2) : ");
		int  code = sc.nextInt();

		System.out.print("Enter the weight : ");
		int  weight = sc.nextInt();

		Delivery delivery = new Delivery(year, num, code, weight);
		delivery.display();
	}
}

class Delivery{

	int year;
	int no;
	int del_num;
	int code;
	int weight;
	double fee;

	Delivery(int year, int num, int code, int weight){

		// Initialise the variables
		this.year = year;
		this.no = num;
		this.code = code;
		this.weight = weight;

		this.del_num = (this.year * 10000) + this.no;
		this.fee = calculate_fee(this.weight, this.code);
	}

	// Calculate the fee
	double calculate_fee(int weight, int code)
	{
		if(code == 1){
			if(weight < 5)
				return 12.00;
			else if(weight>=5 && weight <= 20)
				return 16.50;
			else
				return 22.00;
		}
		else{
			if(weight < 5)
				return 35.00;
			else
				return 47.95;
		}
	}

	void display()
	{
		System.out.println("\n\n\nDelivery Number : " + del_num);
		System.out.println("Year : " + year);
		System.out.println("Area Code : " + code);
		System.out.println("Weight : " + weight);
		System.out.println("Total Fee : " + fee);
	}
}

// SamujjalChoudhury
