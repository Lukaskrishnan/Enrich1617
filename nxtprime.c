# Enrich1617
#include<stdio.h>
int check(int num)
{
	int key=0;
	if((num%2)==0 ||(num%3)==0)
	{ 	
		key=1;
		return 0;
	}
	int i=6;
	while(i<num/2)
	{
		if((num%(i-1))==0 || (num%(i+1)==0)) 
		{
			key=1;
			return 0;
		}
		i=i+6;
	}
	if(key==0)
	{
		printf("next prime is..%d",num);
		exit(0);
	}
}
int main()
{
	int a,s;
	scanf("%d",&a);
	if((s=a%6)!=0)
	{
		s=a/6;
		s=(s*6)+6;
	}
	if((s=a%6)==0)
	{
		s=a/6;
		s=(s*6);
		check(s+1);
		s=(s-1)+6;
	}
	while(1)
	{

		check(s+1);
		check(s-1);
		s=s+6;
	}
}
