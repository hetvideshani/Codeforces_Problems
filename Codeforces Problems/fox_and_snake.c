#include<stdio.h>

int main()
{
    int m,n,i,j,count=2;
    scanf("%d%d",&m,&n);

    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=n;j++)
            {
                printf("#");
            }
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if(count%2==0&&j==n)
                {
                    printf("#");
                }
                else if(count%2!=0&&j==1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            count++;
        }
        printf("\n");
    }
    
    return 0;
}