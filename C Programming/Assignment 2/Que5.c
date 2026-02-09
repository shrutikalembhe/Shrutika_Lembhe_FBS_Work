//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.

#include<stdio.h>
void main() {
	int price;
	double totalp;
	char student;
	printf("Enter price:");
	scanf("%d",&price);
	printf("You are student or not ");
	scanf(" %c",&student);


	if(student=='y'||'Y') {

		if(price>500) {
			totalp=price-(price*0.20);
		} else {
			totalp=price-(price*0.10);
		}
	} 
	
	else if(student=='n'||'N') {
		if(price>600) {
			totalp=price-(price*0.15);
		} else {
			printf("%d", price);
		}
	}
	printf("Total price after discount = %lf", totalp);
}