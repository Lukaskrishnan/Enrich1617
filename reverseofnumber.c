# Enrich1617
#include <stdio.h>
int main()
{
	int n,rev=0;
	scanf("%d",&n);
	if(n>=0)
	{
		do
	  {
			rev=(rev*10)+(n%10);
			n=n/10;
		}while(n!=0);
		printf("The reverse of given number is  %d",rev);
	}
	else
	{
		printf("given number is negative number");
	}
}
