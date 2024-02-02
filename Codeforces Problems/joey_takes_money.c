#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n;
        long long int mul=1;
        scanf("%d",&n);

        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
            mul=mul*a[j];
        }

        printf("%lld\n",(mul+n-1)*2022);

    }
    
    return 0;
}