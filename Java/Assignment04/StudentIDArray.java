/*
+-----------------------------------------------------------------------------------------------------------------------------------------+
| Write an application containing three parallel arrays that hold 10 elements each.                                                       |
| The first array holds four-digit student ID numbers, the second holds first names, and the third holds the student’s                    |
| grade point averages. Read a student ID number and display the student’s first name and grade point average. 							  |
| If a match is not found, display an error message that includes the invalid ID number and allow the user to search for a new ID number. |
| Save the file as StudentIDArray.java																									  |
+-----------------------------------------------------------------------------------------------------------------------------------------+
*/

import java.util.Scanner;

class StudentIDArray{
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		Student student[] = new Student[10];

		for(int i=0;i<10;i++)	student[i] = new Student();
		int ind = 0;
		int search;

		System.out.println("\n\n**********StudentIDArray**********");

		outerLoop : while(ind<10){
			System.out.print("\n\nEnter Student ID : ");
			search = scanner.nextInt();

			if(search == -9999)
				break;

			for(int i=0;i<ind;i++){
				if(student[i].id == search){
					System.out.println("Student ID : " + student[i].id);
					System.out.println("Name : " + student[i].name);
					System.out.println("Average Point : " + student[i].point);
					continue outerLoop;
					}
				}

				System.out.println("Record not found. Please enter the record for ID :  " + search);
				System.out.print("Name : ");
				student[ind].name = scanner.next();

				System.out.print("Average Point : ");
				student[ind].point = scanner.nextFloat();

				student[ind++].id = search;
		}
	}
}

class Student{
	int id;
	String name;
	float point;
}