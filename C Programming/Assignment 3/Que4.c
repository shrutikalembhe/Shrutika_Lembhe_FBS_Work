//Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
void main() {
int no=7;
int i=1;
int count=0;
while(i<=7){
	if(no%i==0){
		count++;
	}
	i++;
}
if(count==2){
	printf("No is prime");
}
else{
	printf("No is not prime");
}
}