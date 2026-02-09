//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

#include<stdio.h>
void main(){
	int s1 , s2,s3;
	printf("Enter side 1:");
	scanf("%d" , &s1);
	printf("Enter side s2:");
	scanf("%d" ,&s2);
	printf("Enter side s3:");
	scanf("%d" ,&s3);
	
	if(s1==s2 && s1==s3&&s2==s3){
		printf("Triangle is Equilateral");
	}
	else if(s1==s2 || s1==s3||s2==s3){
		printf("Triangle is Isosceles");
	}else{
		printf("Triangle is Scalene");
	}
}