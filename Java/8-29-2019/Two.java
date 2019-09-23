// First program given in the class (29-8-19)
import java.util.Scanner;

class Two{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int sum = 0, count = 0;
		while(scanner.hasNextInt()){
			int num = scanner.nextInt();
			sum += num;
			count++;			
		}
		System.out.println("Mean : " + sum/count);
	}
}