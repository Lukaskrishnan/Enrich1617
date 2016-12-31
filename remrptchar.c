# Enrich1617
#include<stdio.h>
#include<string.h>
main()
{
	char c[50],s[50];
	int n=0,m=0,flag=0;
	gets(c);
	strcpy(s,c);
	while(c[n]!='\0')
	{
		m=0;flag=0;
		while(m<n)
		{
			if(c[n]==s[m])
			{
				m++;
				flag=1;
			}
			m++;
		}
		if(flag==0)
		{
			printf("%c",c[n]);
		}
		n++;
	}
}
