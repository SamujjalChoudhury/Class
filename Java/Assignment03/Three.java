/*
+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Write a Java Program to perform the following:																														|
| Given a string, count the number of words ending in 'y' or 'z' -- so the 'y' in "heavy" and the 'z' in "fez" count, but not the 'y' in "yellow" (not case sensitive). |
| Example:																																								|
| countYZ("fez day") → 2																																				|
| countYZ("day fez") → 2																																				|
| countYZ("day fyyyz") → 2																																				|
+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
*/

class Three{

	static int countYZ(String str) {
		int size = str.length();
		int count = 0;
		for(int i=0;i<size;i++) {
			if(str.charAt(i) == ' ')
				if((str.charAt(i-1)=='y') || (str.charAt(i-1)=='Y') || (str.charAt(i-1)=='z') || (str.charAt(i-1)=='Z'))
					count++;
		}
		if(str.endsWith("Y") || str.endsWith("y") || str.endsWith("Z") || str.endsWith("z"))
			count++;
		return count;
	}

	public static void main(String[] args) {
		System.out.println(countYZ("day fyyyz"));
	}
}

// SamujjalChoudhury
