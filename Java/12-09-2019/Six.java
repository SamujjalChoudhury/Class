// *******
//  *   *
//   * *
//    *
//   * *
//  *   *
// *******

class Six{
	public static void main(String[] args) {
		int row = 7, k = 0;

		// Upper star line
		for (int i = 0;i<row;i++)
			System.out.print("*");
		System.out.println();

		//Upper V
		for(int i = row/2 -1 ;i>0 ;i--){

			for(int j = row/2;j>i;j--)
				System.out.print(" ");
			System.out.print("*");

			for(int j = 1; j <(i * 2); j++)
				System.out.print(" ");
			// if (i >= 0)
				System.out.println("*");
		}

		// Lower V
		for(int i = row/2;i>0;i--){

			for(int j = row/2;j>k;j--)
				System.out.print(" ");
			System.out.print("*");

			for(int j = 1; j<k * 2;j++)
				System.out.print(" ");

			if(i < row/2)
				System.out.print("*");
			System.out.println();

			k++;
		}

		// Upper star line
		for (int i = 0;i<row;i++)
			System.out.print("*");
		System.out.println();

	}
} 