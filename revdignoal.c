# Enrich1617
#include<stdio.h>
main()
{
	int a[4][4],m,c=0,temp;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	while(c<m)
	{
		temp=a[c][c];
		a[c][c]=a[c][m-c-1];
		a[c][m-c-1]=temp;
		c++;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			printf("%d ",a[i][j]);
	printf("\n");
	}
}
	
	
