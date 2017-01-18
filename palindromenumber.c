# Enrich1617
#include <stdio.h>
int rev(int i)
{
	int c=0;
	while(i!=0)
	{
		c=c*10+i%10;
		i=i/10;
	}
	return c;
}	
int main()
{
	int a,b;
	scanf("%d",&a);
	while(1)
	{
		b=rev(a);
		if(a==b)
		{
			printf("%d",a);
			break;
		}
		else
		{
			a++;
		}
	}
	
}
