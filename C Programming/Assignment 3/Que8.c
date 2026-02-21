//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong

#include<stdio.h>
void main(){
	int no=145;
	int temp=no;
	int sum=0;
	

	while(no>0){
int	no1=no%10;
	int fact=1;
	int i=1;
	while(i<=no1){
		fact=fact*i;
        i++;
	}
	sum=sum+fact;
	no=no/10;
	}
if(sum==temp){
	printf("Strong no");
}
else{
	printf("Not strong");
}
}