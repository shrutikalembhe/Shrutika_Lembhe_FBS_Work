////Write a program to accept string from user and replace one character
////from special symbol.

#include<stdio.h>
void main(){
	char str[10];
	
	printf("Enter string:");
	scanf("%s" ,&str);	
	
    for(int i=0; str[i]!='\0'; i++){
    	str[0]='$';
	}
	printf(" Updated String: %s ",str);
}

