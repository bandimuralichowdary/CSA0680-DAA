#include<stdio.h>
int count=0;

int isPerfectNumber(int num)
{
	int sum=0;
	count++;
	for(int i=1;i<=num/2;i++)
	{
		count++;
		count++;
		count++;
		if(num%i==0)
		{
			sum+=i;
			count++;
		}
	}
	count++;
	count++;
	if(sum==num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int number;
	printf("Enter a positive number:");
	count++;
	scanf("%d",&number);
	count++;
	
	
	count++;
	if(isPerfectNumber(number))
	{
		printf("%d is a perfect number.\n",number);
		count++;
	}
	else
	{
		printf("%d is not a perfect number.\n",number);
		count++;
	}
	
	printf("Time complexity is %d\n",count);
	return 0;
}
