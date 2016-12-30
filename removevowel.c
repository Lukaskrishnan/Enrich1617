# Enrich1617
#include <stdio.h>

int find(char c)
{
	switch(c)
	{
		case 'a':
		{
			return 0;
			break;
		}
		case 'e':
		{
			return 0;
			break;
		}
		case 'i':
		{
			return 0;
			break;
		}
		case 'o':
		{
			return 0;
			break;
		}
		case 'u':
		{
			return 0;
			break;
		}
		case 'A':
		{
			return 0;
			break;
		}
		case 'E':
		{
			return 0;
			break;
		}
		case 'I':
		{
			return 0;
			break;
		}
		case 'O':
		{
			return 0;
			break;
		}
		case 'U':
		{
			return 0;
			break;
		}
		default: return 1;
	}
}
int main() 
{
	char c[50];
	int n=0;
	gets(c); 
	while(c[n]!='\0')
	{
		if((c[n]>'a' && c[n]<'z')||(c[n]>'A' && c[n]<'Z'))
		{
			if(find(c[n]))
				printf("%c",c[n]);
		}n++;
	}
	
}
