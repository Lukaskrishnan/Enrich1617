# Enrich1617
#include <stdio.h>
int main() 
{
	int n,i,j,flag=0;
	scanf("%d",&n);
	i=n+1;
	while(1)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d",i);
			break;
		}
		else
		{
			i++;
		}
	}

}
