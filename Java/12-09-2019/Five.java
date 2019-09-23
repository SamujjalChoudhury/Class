//    *
//   ***
//  *****
// *******

class Five{
	public static void main(String[] args) {
		int row = 4;
		for(int i = 1;i<=row;i++){

			for(int j = row - i;j>0;j--)
				System.out.print(" ");

			for(int j = 0;j<2 * i - 1;j++)
				System.out.print("*");

			System.out.println();
		}
	}
}