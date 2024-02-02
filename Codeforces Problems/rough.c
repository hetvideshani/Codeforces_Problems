#include<stdio.h>

int main()
{
    int n,i,j,k,gdc=0,x;
        scanf("%d",&n);
        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);            
        }

        x=a[0];

        for(j=1;j<n;j++)
        {
            if(a[j]%x==0)
            {
                if(a[j]<x)
                {
                    gdc=a[j];
                }
                else
                {
                    gdc=x;
                }
                x=gdc;
            }
            else
            {
                gdc=1;
            }
        }

        printf("%d",gdc);
}
        