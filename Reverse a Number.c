#include <stdio.h>
#include<math.h>

int main() {
   int number, reverse = 0, remainder;
   int count=0;

   printf("Enter an integer: ");
   scanf("%d", &number);

   count+=log(number);

   // reverse the number
   while (number != 0) {
       remainder = number % 10;
       reverse = reverse * 10 + remainder;
       number /= 10;
   }

   printf("The reverse of the number is: %d", reverse);
   printf("\nThe time complexity is %d", count);

   return 0;
}
