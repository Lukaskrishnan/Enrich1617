# Enrich1617
#include <stdio.h>
#include<string.h>
char *subs(char *s,int start,int end)
{	
	char *e;
	e=(char*)malloc(sizeof(char)*10);
	int j;
	for(int i=start,j=0;i<end;i++,j++)
	{
		e[j]=s[i];
	}
	return e;
}
void check(char *a,char *b)
{	char z[10];
	int x=strlen(a);
	int start=x;
	int end=
	int count1=0;
	while(1)
	{
		strcpy(z,subs(b,x,x+(x-1));
		if(strcmp(a,z)==1)
		{
			printf("working if");
			printf("%d",count1);
			count1=count1+1;
			start=start+x;
			x=x+x;
			continue;
		}
		else
		{		
			printf("%d%s\n",count1,a);
		}
		break;
	}
}


int main()
{
	char c[10]="abababc",d[10];
	int n,i=0,j=0;
	char ref=c[0];
	d[0]=c[0];
	while(1)
	{	
		i++;
		if(c[i]!=ref)
		{
			d[++j]=c[i];
			continue;
		}
		else
		{
			check(d,c);
		}
		break;
	}
				

}
