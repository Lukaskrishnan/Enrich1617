# Enrich1617
#include<stdio.h>
main()
{
	int num,t,n=0;
	scanf("%d",&num);
	t=num;
	while(t!=0)
	{
		n=n*10+t%10;
		t=t/10;
	}
	if(n==num)
		printf("YES");
	else
		printf("NO");


}
