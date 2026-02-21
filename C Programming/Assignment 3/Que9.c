//Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome

#include<stdio.h>
void main(){
	int no=121;
	int i=1;
	int temp=no;
	int rev=0;
	
	while(no>0){
	int	no1=no%10;
		rev=rev*10+no1;
		no=no/10;
	}
	if(temp==rev){
		printf("No is palindrome");
	}
	else{
		printf("No is not palindrome");
	}
}