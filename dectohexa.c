# Enrich1617
#include <stdio.h>

int main(void) 
{
    int i=0,x,a[5],j;
    scanf("%d",&x);
    while(x>16)
    {
       a[i]=x%16;
        x=x/16;
        i++;
    }
    a[i]=x;
    for(j=i;j>=0;j--)
    printf("%d",a[j]);
	// your code goes here
	return 0;
}

