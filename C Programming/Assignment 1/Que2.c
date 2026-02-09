#include<stdio.h>
void main(){
	int num=129;
	int n1,n2,n3,rem,rev;
	n1=num%10;
	rem=num/10;
	n2=rem%10;
	n3=rem/10;
	rev=n3*100+n2*10+n3;
	if(num==rev){
		printf(" %d  is palindrome  " ,num);
	}
	else
	printf("%d is not palindrome" ,num);
}