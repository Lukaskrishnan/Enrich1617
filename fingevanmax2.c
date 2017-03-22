# Enrich1617
#include <stdio.h>
int findmax2(int *a,int n)
{
	int m1=0,m2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			if(a[i]>m1)
			{
				m2=m1;
				m1=a[i];
			}
			else if(a[i]>m2)
			{
				m2=a[i];
			}
		}
	}
	return m2;
}
int main(void) 
{
	int a[20],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",findmax2(a,n));
	
	// your code goes here
	return 0;
}
