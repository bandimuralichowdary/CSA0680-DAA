#include<stdio.h>
#include<string.h>
void main(){
	char a[20];
	int b,count=0,i,c;
	printf("Enter a string:");
	scanf("%s",&a);
	b=strlen(a);
	c=b;
	for(i=0;i<b;i++){
		if(a[i]==a[c-1]){
			count=count+1;
		}
		c--;
	}
	if(count==b){
		printf("The given string %s is Palindrome",a);
	}
	else{
		printf("The given string %s is not a palindrome",a);
	}
}
