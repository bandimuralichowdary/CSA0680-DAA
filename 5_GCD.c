#include <stdio.h>  
#include <conio.h>  
int main()  
{ 
        int n1, n2, i, GCD_Num;  
        int count=0;
        printf ( "Enter any two numbers: \n ");
        count++;
        scanf ( "%d %d", &n1, &n2);
        count++;
        for( i = 1; i <= n1 && i <= n2; ++i)  
        {  
            count++;
            count++;
            count++;
            if (n1 % i ==0 && n2 % i == 0)  
                GCD_Num = i; 
                count++;
        }  
		count++;
        printf ("GCD of two numbers %d and %d is %d  ", n1, n2, GCD_Num);
        count++;
        printf("\ntime complexity :%d ",count);
        count++;
        return 0;  
     }
