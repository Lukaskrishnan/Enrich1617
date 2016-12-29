# Enrich1617
include<stdio.h>
main()
{
	int num,flag=0,temp,count=0;
	printf("\nenter the number to be checked\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		count=count*10+temp%10;
		temp=temp/10;
	}
	if(count==num)
		printf("YES");
	else
		printf("NO");


}
