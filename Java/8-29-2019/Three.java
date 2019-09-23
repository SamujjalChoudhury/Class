// Second program given in the class (29-8-19)
import java.io.BufferedReader;
import java.io.InputStreamReader;

class Three{
	public static void main(String[] args) throws Exception {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter radius : ");
		double radius = Double.parseDouble(bufferedReader.readLine());
		double area = (22/7) * radius * radius;
		System.out.println("Area of circle : " + area);
	}
}