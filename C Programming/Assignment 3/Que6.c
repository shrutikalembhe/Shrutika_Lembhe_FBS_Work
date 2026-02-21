//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect

#include<stdio.h>
void main(){
	int n=28;
	int i=1;
	int sum=0;
	while(i<=n/2){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
		printf("%d" ,sum);
		if(sum==n){
			printf("No is perfect");
		}
		else{
			printf("No is not perfect");
		}
}