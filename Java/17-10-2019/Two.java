// Write an apptication that displays every perfect number from 1 through 1000. 
// A perfect number is one that equals the sum of all the number that divides evenly into it. 
// For example, 6 is perfect because 1, 2 and 3 divides evenly into it, and their sum is 6;
// however 12 is not a perfect number because 1,2,3,4 and 6 divides evenly into it, and their sum is greater than 12

import java.lang.Math;


class Two{

	// Checks for prime number
	static boolean isPrime(int n) 
    { 
        // Check from 2 to n-1 
        for (int i = 2; i < n/2; i++) 
            if (n % i == 0) 
                return false; 
       
        return true; 
    } 


    // Calculates the perfect number
    static int perfectNumber(int n)
    {
    	int a, b;
    	a = (int) Math.pow(2, n-1);
    	b = (int) Math.pow(2, n);
    	return a * (b - 1);
    }

    public static void main(String[] args) {

    	int num;
    	for(int i=1;i<=1000;i++){

    		if(isPrime(i)){

    			num = perfectNumber(i);
    			
    			if(num<=1000)
    				System.out.println(num);
    			else 
    				System.exit(0);
    		}
    	}
    }
}