// Program given on class (28-8-19)

import java.util.Scanner;

class One{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		String name = scanner.nextLine();
		char gender = scanner.next().charAt(0);
		int age = scanner.nextInt();
		long mobile = scanner.nextLong();
		double cgpa = scanner.nextDouble();

		System.out.println("Name : " + name);
		System.out.println("Gender : " + gender);
		System.out.println("Age : " + age);
		System.out.println("Mobile Number : " + mobile);
		System.out.println("CPGA : " + cgpa);
	}
}