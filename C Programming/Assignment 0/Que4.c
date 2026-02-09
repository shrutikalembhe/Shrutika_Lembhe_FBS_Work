//Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>
void main(){
	int a=2;
	int b=3;
	int temp=a;
    a=b;
    b=temp;
    printf("a: %d\n",a);
    printf("b: %d",b);
}