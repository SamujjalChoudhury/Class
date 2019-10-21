// Write an application that shows the sum of 1 to n for every n from 1 to 50, 
// i.e. the program displays 1(the sum 1 alone), 3(the sum of 1 and 2), 
// 6(the sum of 1, 2, 3) , 10(the sum of 1, 2, 3 and 4) and so on.

import java.util.Scanner;

class One{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the value of n : ");
		int n = sc.nextInt();

		int sum = 0;
		for(int i=1;i<=n;i++){
			sum = sum + i;
			System.out.println(sum);
		}
	}
}