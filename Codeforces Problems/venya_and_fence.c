#include<stdio.h>

int main()
{
    int n,h,i,sum=0;
    scanf("%d%d",&n,&h);

    for(i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);

        if(a>h)
        {
            sum=sum+2;
        }
        else
        {
            sum++;
        }
    }

    printf("%d",sum);
    
    return 0;
}