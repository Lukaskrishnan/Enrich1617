# Enrich1617
#include <stdio.h>

int main()
{
	char c[50];
	int l=0,i=0,j=0,flag=0;
	gets(c);
	while(c[l]!=0)
		l++;
	for(i=0,j=l-1;i<l/2,j>l/2;i++,j--)
	{
		if(c[i]!=c[j])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("palindrome");
	}
	else
	{
		printf(" not a palindrome");
	}
	
}
