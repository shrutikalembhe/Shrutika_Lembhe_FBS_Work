//Print prime numbers in the given range 1 to n.

#include<stdio.h>
void main() {
	int no,j,count,i;
	printf("Enter number");
	scanf("%d",&no);

	for(int i=2; i<=no; i++) {
		count=0;

		for(j=1; j<=i; j++)
			if(i%j==0) {
				count++;
			}

		if(count==2) {
			printf("%d ",i);
		}
	}
}