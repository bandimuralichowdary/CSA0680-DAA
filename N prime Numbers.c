#include<stdio.h>
int main(){
	int n,i,j,c;
	printf("enter the range:");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		c=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				c+=1;
			}
		}
		if(c<=2){
			printf("\n%d is prime in range of %d",i,n);
		}
	}
}
