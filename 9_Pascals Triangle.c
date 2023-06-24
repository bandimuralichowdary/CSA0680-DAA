#include<stdio.h>

int main()
{
	int rows, coef=1,space,i,j;
	int count=0;
	printf("Enter the number of rows:");
	count++;
	scanf("%d",&rows);
	count++;
	
	for(i=0;i<rows;i++)
	{
		count++;
		count++;
		count++;
		for(space=1;space<=rows-i;space++)
		{
			count++;
			count++;
			count++;
		    printf("  ");
			count++;
    	}
    	count++;
		for(j=0;j<=i;j++)
		{
			count++;
			count++;
			count++;
			if(j==0 || i==0)
			coef=1;
			else
			coef=coef*(i-j+1)/j;
			count++;
			
			printf("%4d",coef);
			count++;
		}
		count++;
		printf("\n");
		count++;
	}
	count++;
	
	printf("Time complexity is %d\n",count);
	count++;
	return 0;
}
