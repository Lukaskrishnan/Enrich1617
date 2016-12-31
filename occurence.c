# Enrich1617
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *a,m,occ,count=0;
	scanf("%d",&m);
	a=(int*)malloc(sizeof(int)*m);
	for(int i=0;i<m;i++)
		scanf("%d",&a[i]);
	scanf("%d",&occ);
	for(int i=0;i<m;i++)
	{
		if(occ==a[i])
		{
			count++;
		}
	}
	printf("%d",count);
}
