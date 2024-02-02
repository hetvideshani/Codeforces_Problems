#include<stdio.h>

int main()
{
    int x,i,j,max=0,total=0;
    scanf("%d",&x);

    int a[x][2];

    for(i=0;i<x;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<x;i++)
    {
        total=total-a[i][0]+a[i][1];
        if(total>max)
        {
            max=total;
        }
    }

    printf("%d",max);
    
    return 0;
}