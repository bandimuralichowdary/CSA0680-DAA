#include<stdio.h>
int main()
{
	int a=0, b=1, c, i,n;
	int count=0;
	printf("Enter the number of elements:");
	count++;
	scanf("%d",&n);
	count++;
	printf("\n %d, %d, ",a,b);
	count++;
	count++;
	for(i=2;i<n;i++)
	{
		count++;
		count++;
		c=a+b;
		count++;
		printf("%d, ",c);
		count++;
		a=b;
		count++;
		b=c;
		count++;
	}
	count++;
	printf("\nTime complexity is %d\n",count);
	return 0;
}
