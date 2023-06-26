#include<stdio.h>
int main(){
	int a,i,r,lis[20],j,t;
	printf("Enter the range:");
	scanf("%d",&a);
	printf("Enter the numbers:\n");
	for(i=0;i<a;i++){
		printf("Enter the %d element:",i+1);
		scanf("%d",&lis[i]);
	}
	for(i=0;i<a;i++){
		for(j=i;j<a;j++){
			if(lis[i]>lis[j]){
				t=lis[i];
				lis[i]=lis[j];
				lis[j]=t;
			}
		}
	}
	printf("The sorted list:");
	for(i=0;i<a;i++){
		printf(" %d ",lis[i]);
	}
}
