/*
 --------------------------------------------------------------------------------------------------------------------
| Write an apptication that displays every perfect number from 1 through 1000.                                       |
| A perfect number is one that equals the sum of all the number that divides evenly into it.                         |
| For example, 6 is perfect because 1, 2 and 3 divides evenly into it, and their sum is 6                            |                          
| however 12 is not a perfect number because 1,2,3,4 and 6 divides evenly into it, and their sum is greater than 12  |
 --------------------------------------------------------------------------------------------------------------------
*/


import java.lang.Math;


class Two{

    static boolean isPerfect(int n) { 

    int sum = 1; 
    for (int i = 2; i * i <= n; i++) 
    { 
        if (n % i==0) 
        { 
            if(i * i != n) 
                sum = sum + i + n / i; 
            else
                sum = sum + i; 
        } 
    }  
    if (sum == n && n != 1) 
        return true; 
  
    return false; 
    } 


    public static void main (String[] args) {
        for (int n = 2; n < 1000; n++) 
            if (isPerfect(n)) 
                System.out.println(n); 
    }
}

// SamujjalChoudhury
