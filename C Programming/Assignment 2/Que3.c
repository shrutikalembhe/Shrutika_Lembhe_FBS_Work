//Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void main(){
	int a,b,c;
	a=50;
	b=60;
	c=10;
	if(a>b &&a>c)
		printf("a is greatest");
	else if(b>a && b>c)
		printf("b is greatest");
	else
		printf("c is greatest");
}