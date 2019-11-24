/*
+------------------------------------------------------------------------------------------------------------------+
| Write an application that allows a user to enter the names and phone numbers of up to 20 friends. 			   |
| Continue to prompt the user for names and phone numbers until the user enters “ zzz” or has entered 20 names,    |
| whichever comes first. When the user is finished entering names, produce a count of how many names were entered, |
| but make certain not to count the application-ending dummy “ zzz” entry. Then display the names.                 | 
| Ask the user to type one of the names and display the corresponding phone number.                                |
| Save the application as PhoneBook.java. 																		   |
+------------------------------------------------------------------------------------------------------------------+
*/

import java.util.Scanner;

class PhoneBook{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String name;
		String phone;
		String check = " zzz";
		String search;
		int ind = 0;

		Book contact[] = new Book[20];
		for (int i=0;i<contact.length;i++) {
			contact[i] = new Book();
		}


		System.out.println("****PhoneBook*****");
         System.out.println("Max entries 20");
         System.out.println("Type ' zzz' to stop\n");
         System.out.println("Add name and phone number");


		for(int i=0;i<contact.length;i++){
			System.out.print("\n\nName : ");

			name = scanner.nextLine();
			
			if(name.compareTo(" zzz") == 0){
				ind = i+1;
				break;
			}

			System.out.print("Phone Number : ");
			phone  = scanner.nextLine();
			contact[i].name = name;
			contact[i].phone = phone;

		}

		System.out.println("Total number of entries : " + ind + "\n\nEnter the name you want to search : ");

		search = scanner.nextLine();

		for(int i=0;i<ind;i++){
			if(contact[i].name.equalsIgnoreCase(search)){
				System.out.println("Name : " + contact[i].name);
				System.out.println("Phone Number : " + contact[i].phone);
				return;
			}
		}
		System.out.println("Not Found!");

	}
}

class Book{
	String name;
	String phone;
}

// SamujjalChoudhury
