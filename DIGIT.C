#include <stdio.h>

int main() {
	int n,r,sum=0,digit=0;
	scanf("%d",&n);
	while(n!=0)
	{
		digit++;
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum is..%d \n No.of digits is..%d",sum,digit);
}
