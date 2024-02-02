#include<stdio.h>

int main()
{
    int n,i,j,flag1,flag2=0,k;

    scanf("%d",&n);

    for(i=n-2;i>2;i--)
    {
        flag1=0;
        for(j=2;j<=n/2;j++)
        {
            if(i%j==0)
            {
                flag1=1;
                break;
            }
        }
        if(flag1==1)
        {
            for(k=2;k<=(n-i)/2;k++)
            {
                if((n-i)%k==0&&(n-i)!=1)
                {
                    flag2=1;
                    break;
                }
            }
        }
        if(flag2==1&&flag1==1)
        {
            break;
        }
    }

    printf("%d %d",i,n-i);
    
    return 0;
}