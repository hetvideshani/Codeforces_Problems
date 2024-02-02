#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,count=0,x,ans=1;
        scanf("%d",&n);

        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

        x=10-n;

        printf("%d\n",x*(x-1)*3);

    }
    
    return 0;
}