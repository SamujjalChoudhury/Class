/*
 -----------------------------------------------------------------------------
| Write a program to count the total number of non-zero elements in an array. |
 -----------------------------------------------------------------------------
*/

import java.util.Scanner;

class Three{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n, count = 0;

		System.out.print("Enter the size : ");
		n = scanner.nextInt();

		int[] arr = new int[n];

		System.out.println("Enter the array : ");
		for(int i=0;i<n;i++)
			arr[i] = scanner.nextInt();

		for(int i=0;i<n;i++){
			if(arr[i] != 0)
				count++;
		}

		System.out.print("\n\nArray : ");
		for(int i=0;i<n;i++)
			System.out.print(arr[i] + "  ");

		System.out.println("\nNumber of zeros : " + count);
	}
}

// SamujjalChoudhury
