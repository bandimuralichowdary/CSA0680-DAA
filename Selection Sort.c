#include<stdio.h>
int main(){
int a,i,lis[10],b,j,r;
printf("Enter range:");
scanf("%d",&a);
for(i=0;i<a;i++){
	printf("Enter %d element:",i+1);
	scanf("%d",&b);
	lis[i]=b;
}
printf("\nUnsorted list is:");
for(i=0;i<a;i++){
	printf(" %d ",lis[i]);
}
for(i=0;i<a;i++){
	for(j=0;j<i;j++){
		if(lis[i]<lis[j]){
			r=lis[i];
			lis[i]=lis[j];
			lis[j]=r;
		}
	}
}
printf("\nSorted List is:");
for(i=0;i<a;i++){
	printf(" %d ",lis[i]);
}
}
