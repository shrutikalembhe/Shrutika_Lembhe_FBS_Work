//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong

#include<stdio.h>
void main(){
	int no=153;
	int temp=no;
	int sum=0;
	int no1;
	while(no>0){
		no1=no%10; //3
		sum=sum+no1*no1*no1;
		no=no/10;
	}
	if(temp==sum){
		printf("No is armstrong");
	}
	else{
		printf("No is not armstrong");
	}

	
}