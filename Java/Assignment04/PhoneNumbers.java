/*
+---------------------------------------------------------------------------------------------------------------------------+
| A personal phone directory contains room for first names and phone numbers for 30 people. 							    |
| Assign names and phone numbers for the first 10 people. Prompt the user for a name, and if the name is found in the list, |
| display the corresponding phone number. If the name is not found in the list, prompt the user for a phone number,         |
| and add the new name and phone number to the list. Continue to prompt the user for names until the user enters “quit”.    |
| After the arrays are full (containing 30 names),																		    |
| do not allow the user to add new entries. Save the file as PhoneNumbers.java.                                             |
+---------------------------------------------------------------------------------------------------------------------------+
*/

import java.util.Scanner;

class PhoneNumbers {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		Dairy dairy[] = new Dairy[30];
		for(int i=0;i<30;i++)		dairy[i] = new Dairy();

		dairy[0].name = "Samujjal";
		dairy[0].phone = "0123456789"; 
		dairy[1].name = "amujjal";
		dairy[1].phone = "0123457789";
		dairy[2].name = "abcs";
		dairy[2].phone = "0123456712";
		dairy[3].name = "Samu";
		dairy[3].phone = "0003456789";
		dairy[4].name = "Samjjal";
		dairy[4].phone = "0423456789";
		dairy[5].name = "xyz";
		dairy[5].phone = "9993456789";
		dairy[6].name = "jal";
		dairy[6].phone = "0123555789";
		dairy[7].name = "Samuj";
		dairy[7].phone = "0164635789";
		dairy[8].name = "mno";
		dairy[8].phone = "0999456789";
		dairy[9].name = "JHjsbjh";
		dairy[9].phone = "0123468656";

		int i=0, ind=10;
		String name, phone;

		System.out.println("************Phone Number************");

		outerloop : while(ind<30) {
			System.out.print("\n\n\nEnter a name : ");
			name = scanner.nextLine();

			if(name.equals("quit"))
				break;

			for(i=0;i<ind;i++)		if(dairy[i].name.equalsIgnoreCase(name)){
				System.out.println("Name : " + dairy[i].name + "\nPhone : " + dairy[i].phone);
				continue outerloop;
			}

			System.out.print("Name not found in records. Please add new record.\nPhone : ");
			phone = scanner.nextLine();

			dairy[ind].name = name;
			dairy[ind++].phone = phone;

		}
	}
}

class Dairy{
	String name;
	String phone;
}