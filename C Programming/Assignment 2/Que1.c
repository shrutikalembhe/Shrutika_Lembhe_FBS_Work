//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.

#include<stdio.h>
void main(){
	int a ,b,result;
	char operator;
	 
	printf("Enter no1:");
	scanf("%d", &a);
	
	printf("Enter no2:");
	scanf("%d" ,&b);
	
	printf("Enter operator");
	scanf(" %c", &operator);  
	
		
	if(operator=='+'){
		result=a+b;
		printf("%d" , result);
	}
	else if(operator=='-'){
		result=a-b;
		printf("%d" , result);
	}
	else if(operator=='*'){
		result=a*b;
		printf("%d" , result);
	}
	else if(operator=='/'){
		result=a/b;
		printf("%d" , result);
	}
	else if(operator=='%'){
		result=a%b;
		printf("%d" , result);
	}
	}
	