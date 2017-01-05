# Enrich1617
#include <stdio.h>

int i,j,n,v,a[6][6];
void call(int i,int j,int **a)
{
	if(j!=n-1)
	{
		i=n-1;
		if(a[i][++j]==-1)
		{
			a[i][j]=v;
		}
		else
		{
			call2(i,--j,a);
		}
	}
	else
	{
		call4(i,j,a);
	}
}
void call2(int i,int j,int**a)
{
		a[++i][j]=v;
}
void call1(int i,int j,int **a)
{
	if(j!=n-1)
	{
		if(a[--i][++j==-1])
		{
			a[i][j]=v;
		}
		else
		{
			call2(++i,--j,a);
		}
	}
	else
	{
		call3(i,j,a);
	}
}
void call4(int i,int j,int **a)
{
	a[n-1][0]=v;
}
void call3(int i,int j,int **a)
{
	a[--i][0]=v;
}
main() 
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			a[i][j]=-1;
	}
	a[0][1]=1;
	while(v<=(n*n))
	{
		if(i=0)
		{
			call(i,j,a);
			v++;
			continue;
		}
		if(i>=1)
		{
			call1(i,j,a);
			v++;
			continue;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d",a[i][j]);
		printf("/n");
	}
}
