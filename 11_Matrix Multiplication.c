#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	int count=0;
	system("cls");
	printf("Enter the number of row=");
	count++;
	scanf("%d",&r);
	count++;
	printf("Enter the number of column=");
	count++;
	scanf("%d",&c);
	count++;
	printf("Enter the first matrix element =\n");
	count++;
	for(i=0;i<r;i++)
	{
		count++;
		count++;
		count++;
		for(j=0;j<c;j++)
		{
			count++;
			count++;
			count++;
			scanf("%d",&a[i][j]);
			count++;
		}
		count++;
	}
	count++;
	printf("Enter the second matrix element=\n");
	count++;
	for(i=0;i<r;i++)
	{
		count++;
		count++;
		count++;
		for(j=0;j<c;j++)
		{
			count++;
			count++;
			count++;
			scanf("%d",&b[i][j]);
			count++;
		}
		count++;
	}
	count++;
	
	printf("Multiply of the matrix=\n");
	count++;
	for(i=0;i<r;i++)
	{
		count++;
		count++;
		count++;
		for(j=0;j<c;j++)
		{
			count++;
			count++;
			count++;
			mul[i][j]=0;
			count++;
			for(k=0;k<c;k++)
			{
				count++;
				count++;
				count++;
				mul[i][j]+=a[i][k]*b[k][j];
				count++;
			}
			count++;
		}
		count++;
	}
	count++;
	for(i=0;i<r;i++)
	{
		count++;
		count++;
		count++;
		for(j=0;j<c;j++)
		{
			count++;
			count++;
			count++;
			printf("%d\t",mul[i][j]);
			count++;
		}
		count++;
		printf("\n");
		count++;
	}
	count++;
	printf("Time complexity is %d\n",count);
	return 0;
}
