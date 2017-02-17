#include <stdio.h>
#include<string.h>
void sort(char *s,char *s1)
{
	char temp[10];
	strcpy(temp,s);
	strcpy(s,s1);
	strcpy(s1,temp);
}
int main()
{
	char s[10][10];
	int n,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(strlen(s[i])<strlen(s[j]))
			{
				sort(s[i],s[j]);
			}
			if(strlen(s[i])==strlen(s[j]))
				{
					if(s[i]<s[j])
					{
						sort(s[i],s[j]);
					}
				}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s ",s[i]);
	}
}
