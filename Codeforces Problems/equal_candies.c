#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,min,sum=0;
        scanf("%d",&n);
        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(j==0)
            {
                min=a[j];
            }

            if(a[j]<min)
            {
                min=a[j];
            }
        }

        for(j=0;j<n;j++)
        {
            sum=sum+(a[j]-min);
        }

        printf("%d",sum);
    }
    
    return 0;
}