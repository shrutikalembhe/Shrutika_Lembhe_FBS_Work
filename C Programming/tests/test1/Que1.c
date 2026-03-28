//Write a program to print sum of prime numbers in a given range.

#include<stdio.h>
void main() {
	int start=1;
	int end=10;
	int sum=0;
	int count;

	for(int i=start; i<=end; i++) {
		 if(i <= 1) continue; 
		count=0;
		
		for(int j=2; j<i; j++) {
			if(i%j==0) {
				count=1;
				break;
			}
		}
		if(count==0) {
			sum=sum+i;
		}
	}
		printf(" Sum Of prime no: %d",sum);
		}
		
