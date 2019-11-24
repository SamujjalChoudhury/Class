/*
 -------------------------------------------------------------------------------------------
| Write a program to find the smallest between two neighboring numbers in an array.         |
| For example, in the sequence 4, 8, 6, 1, 2, 9, 4 the minimum distance is 1 (between 1 and |
| 2).																						|
 -------------------------------------------------------------------------------------------
*/

import java.lang.Math;
import java.util.Scanner;

class Five{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n, min, loc;

		System.out.print("Enter the size : ");
		n = scanner.nextInt();

		int[] arr = new int[n];

		System.out.println("Enter the array : ");
		for(int i=0;i<n;i++)
			arr[i] = scanner.nextInt();

		min = Math.abs(arr[1] - arr[0]);
		loc = 0;

		for(int i=2;i<n;i++){
			if(Math.abs(arr[i] - arr[i-1]) < min){
				min = Math.abs(arr[i] - arr[i-1]);
				loc = i - 1;
			}
		}

		System.out.println("\n\nMinimun " + min);
		System.out.println("Locations : (" + loc + " , " + (loc + 1) + ")");
	}
}