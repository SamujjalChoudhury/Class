/*
 ----------------------------------------------------------------------
| Write a program to interchange the largest with the smallest element |
 ----------------------------------------------------------------------
*/

import java.util.Scanner;

class One{
	static int maximun(int[] arr) {
		int n = 0;
		int max = arr[n];  
         for (int i = 1; i < arr.length; i++) 
             if (arr[i] > max) {
                 max = arr[i]; 
                 n = i;
             }
        
         return n;
	}

	static int minimun(int[] arr) {
		int n = 0;
		int min = arr[n];  
         for (int i = 1; i < arr.length; i++) 
             if (arr[i] < min) {
                 min = arr[i]; 
                 n = i;
             }
        
         return n;
	}


	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n, max, min, temp;

		System.out.print("Enter the size : ");
		n = scanner.nextInt();

		int[] arr = new int[n];

		System.out.println("Enter the array : ");
		for(int i=0;i<arr.length;i++)
			arr[i] = scanner.nextInt();

		System.out.print("\n\n\n\nArray before swapping : ");
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i] + "  ");

		max = maximun(arr);
		min = minimun(arr);

		temp = arr[max];
		arr[max] = arr[min];
		arr[min] = temp;

		System.out.print("\nArray after swapping : ");
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i] + "  ");

	}
}

// SamujjalChoudhury
