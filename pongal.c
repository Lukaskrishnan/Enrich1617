# Enrich1617
#include <stdio.h>

int main()
{
	char a[]="HAPPY PONGAL";
	int i=0;
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		fflush(stdout);
		usleep(100000);
		i++;
	}
}
