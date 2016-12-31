# Enrich1617
#include<stdio.h>
#include<string.h>
main()
{
	int a[10],n=0,m=0,count=0,k=0,odd=0,flag=0;
	char s[50],c[50];
	gets(c);
	strcpy(s,c);
	k=strlen(c);
	while(m<=k)
	{
		count=0;
		n=0;
		while(c[n]!='\0')
		{
			if(s[m]==c[n])
			{
				count++;
			}
			n++;
		}
			if(count%2!=0)
				odd++;
			if(odd>=2)
				flag=1;
			m++;

	}
	if(flag)
		printf("false");
	else
		printf("true");
	
}
		
