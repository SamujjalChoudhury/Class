/*
 -------------------------------------------------------------------------------------------------------------------------
| Write a program to find the length of the longest consecutive element sequence from a given unsorted array of integers. |
| Sample Array: [49, 1, 3, 200, 2, 4, 70, 5] 																			  |
| The longest consecutive element sequence is [1, 2, 3, 4, 5], therefore the program will return its length 5.            |
 -------------------------------------------------------------------------------------------------------------------------
*/

import java.util.*;

public class Six {
	static int sequenceLength(int arr[], int size)
	{
		Vector vector = new Vector();
		int length = 0; 


		for(int i = 0; i < size; i++) vector.addElement(arr[i]);

		for(int i = 0; i < size; i++)
		{
			int num = arr[i];
			int count = 1;
			
			int low = num - 1;
			while(vector.contains(low))
			{
				vector.removeElement(low);
				low--;
				count++;
			}

			int up = num + 1;
			while(vector.contains(up))
			{
				vector.removeElement(up);
				up++;
				count++;
			}

			length = Math.max(length, count);
		}
		return length;
	}

	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int size;
		int arr[] = new int[20];

		System.out.print("Enter the size : ");
		size = sc.nextInt();

		System.out.println("Enter the numbers");
		for(int i = 0; i < size; i++)	arr[i] = sc.nextInt();

		System.out.println("\nThe length of longest consecutive element sequence is " + sequenceLength(arr,size));

	}

}

// SamujjalChoudhury
