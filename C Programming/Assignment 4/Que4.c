//Print strong numbers in the given range 1 to n.

#include<stdio.h>
void main() {
	int no,fact,temp,sum,no1;
	printf("Enter number: ");
	scanf("%d",&no);

	for(int i=1; i<=no; i++) {
		temp=i;
		sum=0;
		while(temp>0) {
			no1=temp%10;
			fact=1;
			for(int j=1; j<=no1; j++) {

				fact=fact*j;

			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i) {
			printf("%d ",i);
		}
	}
}