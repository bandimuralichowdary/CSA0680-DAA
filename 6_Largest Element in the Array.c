#include <stdio.h>

int main() {
   int array[10],i;
   int loop, largest;
   int count=0;
   
   printf("Enter the elements in the array:");
   count++;
   for(i=1;i<=10;i++)
   {
   	count++;
   	count++;
   	count++;
   	scanf("%d",&array[i]);
   	count++;
   }
   count++;
   largest = array[0];
   count++;
   
   for(loop = 1; loop <= 10; loop++) {
   	count++;
   	count++;
   	count++;
      if( largest < array[loop] ) 
         largest = array[loop];
         count++;
   }
   count++;
   
   printf("Largest element of array is %d\n", largest);
   count++;
   printf("time complexity:%d",count);
   count++;
   
   return 0;
}
