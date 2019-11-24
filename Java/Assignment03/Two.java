/*
 ------------------------------------------------------------------------------------
| Write a program which will read a string and rewrite it in the alphabetical order. |
| For example, the word STRING should be written as GINRST.							 |
 ------------------------------------------------------------------------------------
*/

class Two{
	public static void main(String[] args) {
		String st = "STRING";
		char[] str = st.toCharArray();

		// Selection Sort
		int size = str.length;
		for (int i = 0 ;i<size-1; i++){
         int min = i;

         for (int j = i+1; j<size; j++){
            if (str[j] < str[min]){
            min = j;
            }
         }
         char temp = str[min];
         str[min] = str[i];
         str[i] = temp;
      }
      System.out.println(str);
	}
}