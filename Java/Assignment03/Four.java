/*
+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Write a Java Program to perform the following:																														   |
| Given a string, return a version without the first 2 chars, except keep the first char if it is 'a' and keep the second char if it is 'b'. The string may be any length. |
| Example:																																								   |
| deFront("Hello") → "llo" 																																				   |
| deFront("java") → "va"																																				   |
| deFront("away") → "aay"																																				   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
*/

import java.io.*;

class Four{

	static StringBuffer deFront(StringBuffer str) {

		if(str.charAt(0) !=  'a') {
			str.deleteCharAt(0);
			if(str.charAt(0) != 'b')
				str.deleteCharAt(0);
		}
		else{
			if(str.charAt(1) != 'b')
				str.deleteCharAt(1);
		}
		return str;
	}

	public static void main(String[] args) {
		StringBuffer str = new StringBuffer("away");
		System.out.println(deFront(str));
	}
}