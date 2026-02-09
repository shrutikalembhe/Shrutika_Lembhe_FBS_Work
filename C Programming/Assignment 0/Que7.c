//Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
void main(){
	int minutes=100;
	int hour=minutes/60;
	int remaining=minutes%60;
	printf("minutes into hour %d \n" ,hour);
	printf("Remaining minutes %d" ,remaining);
	
}