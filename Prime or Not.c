#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter the number to be checked:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count+=1;
	}}
	if(count<=2){
		printf("The given number %d is prime",n);
	}
	else{
		printf("The given number %d is not prime",n);
	}
}
