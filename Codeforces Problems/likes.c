#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,countn=0,countp=0,last;
        scanf("%d",&n);

        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);

            if(a[j]<0)
            {
                countn++;
            }
            else if(a[j]>0)
            {
                countp++;
            }
        }

        for(j=1;j<=countp;j++)
        {
            printf("%d ",j);
            last = j;
        }
        for(j=1;j<=countn;j++)
        {
            last--;
            printf("%d ",last);
        }

        printf("\n");

        for(j=1;j<=countn;j++)
        {
            printf("1 0 ");
        }

        for(j=1;j<=n-(2*countn);j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
    
    return 0;
}