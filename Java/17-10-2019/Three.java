class Three{
	public static void main(String[] args) {

		Delivery delivery = new Delivery(2011,5,1,19);
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
		System.out.println("Delivery Number : " + del_num);
		System.out.println("Year : " + year);
		System.out.println("Area Code : " + code);
		System.out.println("Weight : " + weight);
		System.out.println("Total Fee : " + fee);
	}
}