#include <stdio.h>
#include <math.h>

int main() {
   int number, originalNumber, remainder, result = 0, n = 0;
   int count;

   printf("Enter an integer: ");
   scanf("%d", &number);

   originalNumber = number;

   // count the number of digits in the input number
   while (originalNumber != 0) {
       originalNumber /= 10;
       ++n;
   }

   originalNumber = number;

   // calculate the result
   while (originalNumber != 0) {
       remainder = originalNumber % 10;
       result += pow(remainder, n);
       originalNumber /= 10;
   }

   // check if the input number is an Armstrong number
   if (result == number)
       printf("%d is an Armstrong number.", number);
   else
       printf("%d is not an Armstrong number.", number);
       
    count=log(number);
    printf("\nTime complexity is: %d",count);
   return 0;
}
