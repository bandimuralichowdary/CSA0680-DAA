#include <stdio.h>
int main() 
{
 int n, rev = 0, remainder,count=0;
 printf("Enter an integer: ");
 count++;
 scanf("%d", &n);
 count++;
 while (n != 0) 
 {
 remainder = n % 10;
 count++;
 rev = rev * 10 + remainder;
 count++;
 n /= 10;
 count++;
 }
 count++;
 printf("Reversed number = %d", rev);
 count++;
 printf("\ntime complexity is %d:",count);
}
