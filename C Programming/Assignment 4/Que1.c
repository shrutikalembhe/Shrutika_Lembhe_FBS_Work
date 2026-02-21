//Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void main(){
	
	int no,i,temp,no1,sum;
	
	printf("Enter number:");
	scanf("%d" ,&no);
	
	for(int i=1;i<=no;i++){
		int temp=i;
		sum=0;
	
	while(temp>0){
		 no1=temp%10;
		sum=sum+(no1*no1*no1);
		temp=temp/10;
	}
	if(sum==i)
	printf("%d " ,i);
}
}