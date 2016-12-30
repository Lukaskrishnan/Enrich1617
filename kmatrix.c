# Enrich1617
#include <stdio.h>

int main()
{
	int a[10][10],m,n,k;
	scanf("%d %d %d",&m,&n,&k);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i+j)==k)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}printf("\n");
	}
}
