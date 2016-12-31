# Enrich1617
#include<stdio.h>
main()
{
	int a[4][4],m,n,l,d=0,c=0;
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	while(c<m||d<n)
	{
		a[c][0]=1;
		a[c++][n-1]=1;
		a[0][d]=1;
		a[m-1][d++]=1;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
	printf("\n");
	}
}
	
	
