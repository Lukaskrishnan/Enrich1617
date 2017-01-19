# Enrich1617
#include <stdio.h>

int main()
{
int a[4][4],num=1,r=3,c=3,temp;
char choice;
while(num<16)
{
	a[(num-1)/4][(num-1)%4]=num;
	num++;
}
a[(num-1)/4][(num-1)%4]='\t';
do
{
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("Press U->Up,D->Down,L->Left,R->Right,Q->Quit \n Enter a character");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'U':
		{
			temp=a[r][c];
			a[r][c]=a[r-1][c];
			a[r-1][c]=temp;
			r--;
		}break;
		case 'D':
		{
			temp=a[r][c];
			a[r][c]=a[r+1][c];
			a[r+1][c]=temp;
			r++;
		}break;
		case 'L':
		{
			temp=a[r][c];
			a[r][c]=a[r][c-1];
			a[r][c-1]=temp;
			c--;
		}break;
		case 'R':
		{
			temp=a[r][c];
			a[r][c]=a[r][c+1];
			a[r][c+1]=temp;
			c++;
		}break;
	}
}while(choice!='Q');
}
