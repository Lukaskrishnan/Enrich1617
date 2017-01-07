# Enrich1617
#include <stdio.h>

int main()
{
    int a[3][3],i,j,row1,temp,m,det=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i][0]==1)
        {
            row1=i;
            break;
        }
    }
    for(j=0;j<3;j++)
    {
        temp=a[0][j];
        a[0][j]=a[row1][j];
        a[row1][j]=temp;
    }
    for(i=1;i<3;i++)
    {
        m=a[i][0];
        for(j=0;j<3;j++)
        {
            a[i][j]=(m*a[0][j])-a[i][j];
        }
    }
    m=a[2][1];
    if(m!=0)
    {
        for(j=1;j<3;j++)
        {
            a[2][j]=(m*a[1][j])-a[2][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                det=det*a[i][j];
            }
        }
    }
    printf(" det...%d",det);
}

