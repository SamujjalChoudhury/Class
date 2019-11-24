/*
 ---------------------------------------------------------------------------------------
| Write a program that reads an array of 10 integers. Display all the pairs of elements |
| whose sum is 50.                                                                      |
 ---------------------------------------------------------------------------------------
*/

import java.util.Scanner;

class Four{
	public static void main(String[] args) {
		int[] arr = new int[10];
		Scanner scanner = new Scanner(System.in);

		System.out.println("Enter the array : ");
		for(int i=0;i<arr.length;i++)
			arr[i] = scanner.nextInt();

		System.out.println("\n\n");
		
		for(int i=0;i<arr.length;i++){
			for(int j=0;j<arr.length;j++){

				if(j == i)
					continue;

				else if(arr[i] + arr[j] == 50)
					System.out.println("Pair : " + "(" + arr[i] + "," + arr[j] + ")");
			}
		}
	}
}

// SamujjalChoudhury
