#include<stdio.h>
int main()
{
	int num,r,sum=0,temp;
	int count=0;
	printf("Enter the number:");
	count++;
	scanf("%d",&num);
	count++;
	for(temp=num;num!=0l;num=num/10)
	{
		count++;
		count++;
		count++;
		r=num%10;
		sum=sum+(r*r*r);
		count++;
	}
	count++;
	if(sum==temp)
	{
		printf("The entered number is ARMSTRONG!\n");
		count++;
	}
	else
	{
		printf("The entered number is NOT ARMSTRONG!\n");
		count++;
	}
	count++;
	printf("Time Complexity is:%d\n",count);
	count++;
	return 0;
}
