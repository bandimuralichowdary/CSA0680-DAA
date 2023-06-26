#include<stdio.h>
#include<string.h>
void main(){
	char a[20];
	int i=0,count=0;
	printf("Enter a string:");
	scanf("%s",&a);
	while(a[i]!='\0'){
		count+=1;
		i++;
}
	printf("The length of string is:%d",(count));
}
