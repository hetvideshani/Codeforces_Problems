#include<stdio.h>

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int p,q;
        scanf("%d%d",&p,&q);

        if(q-p>=2)
        {
            sum++;
        }

    }

    printf("%d",sum);
    
    return 0;
}