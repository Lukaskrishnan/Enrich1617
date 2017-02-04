# Enrich1617
#include<stdio.h>
#include<math.h>
int main()
{
	int l,n,a[10],k=1,count1,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(n>0)
	{
		k=k*2;
		n--;
	}
	k=k-1;
	while(k>0)
	{
		l=k;
		count1=0;
		while(l>0)
		{
			if((l%2)==1)
			{
				printf("%d ",a[count1]);
				count1++;
			}
			else
			{
				count1++;
			}		
			l=l/2;	
		}
		k--;
		printf("\n");
	}
}
