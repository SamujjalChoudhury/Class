/*
 ----------------------------------------------------------
| Write a program to delete duplicate values from an array |
 ----------------------------------------------------------
*/

import java.util.Scanner;

class Two{

	static void removeElement(int[] arr, int j) {
		int i=j+1;
		while(i<arr.length){
			arr[j++] = arr[i++];
		}
		arr[--i] = -999999;
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int n;

		System.out.print("Enter the size : ");
		n = scanner.nextInt();

		int[] arr = new int[n];

		System.out.println("Enter the array : ");
		for(int i=0;i<arr.length;i++)
			arr[i] = scanner.nextInt();

		System.out.print("Array before operation : ");
		for(int i=0;i<n;i++)
			System.out.print(arr[i] + "  ");

		for(int i=0;i<arr.length;i++){
			for(int j=i+1;j<arr.length;j++){
				if(arr[i] == arr[j])
					removeElement(arr, j);
			}
		}
		int i=0;
		System.out.print("\nArray after operation : ");
		while(arr[i] != -999999)
			System.out.print(arr[i++] + "  ");
	}
}

// SamujjalChoudhury
