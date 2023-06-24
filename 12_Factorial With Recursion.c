#include<stdio.h>
int count=0;
int factorial(int n)
{
	count++;
	if (n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}

int main()
{
	int num;
	int fact;
	printf("Enter a number:");
	count++;
	scanf("%d", &num);
	count++;
	
	fact=factorial(num);
	
	count++;
	printf("Factorial of %d is %d\n", num, fact);
	count++;
	printf("Time complexity is %d\n",count);
	return 0;
}
