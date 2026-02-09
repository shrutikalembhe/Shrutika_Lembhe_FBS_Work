//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.

#include<stdio.h>
void main(){
	float maths,english,marathi,hindi,sanskrit,total,percentage;
	maths=70;
	english=89;
	marathi=90;
	hindi=87;
	sanskrit=92;
	total=maths+english+marathi+hindi+sanskrit;
	percentage=(total/500)*100;
	printf("Total marks: %f \n", total);
	printf("Percentage: %f",percentage);
	
}