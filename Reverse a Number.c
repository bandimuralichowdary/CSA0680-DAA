#include <stdio.h>
#include<math.h>

int main() {
   int number, reverse = 0, remainder;
   int count=0;

   printf("Enter an integer: ");
   count++;
   scanf("%d", &number);
   count++;

   while (number != 0) {
       remainder = number % 10;
       count++;
       reverse = reverse * 10 + remainder;
       count++;
       number /= 10;
       count++;
   }

   printf("The reverse of the number is: %d", reverse);
   count++;
   printf("\nThe time complexity is %d", count);
   count++;

   return 0;
}
