//Find factorial of given number.
//Input: n = 5
//Output: 120

#include<stdio.h>
void main(){
int no=5;
int i=1;
int fact=1;
while(i<=no){
	fact=fact*i;
	i++;
}
printf("Factorial of no is: %d" ,fact);
}