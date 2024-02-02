#include<stdio.h>
# define r 5
# define c 5
int main()
{
    int i,j,flag=0,a,b;
    int m[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(m[i][j]==1)
            {
                flag=1;
                b=j+1;
                break;
            }
        }
        if(flag==1)
        {
            a=i+1;
            break;
        }                                   
    }

    if(a<=3 && b<=3)
    {
        printf("%d",6-a-b);
    }
    else if(a<=3 && b>3)
    {
        printf("%d",b-a);
    }
    else if(a>3 && b<=3)
    {
        printf("%d",a-b);
    }
    else if(a>3 && b>3)
    {
        printf("%d",a+b-6);
    }

    return 0;
}