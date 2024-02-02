#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,diff;
        scanf("%d",&n);
        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

        for(j=0;j<n-2;j++)
        {
            if(a[j]!=a[j+1]&&a[j+1]==a[j+2])
            {
                diff=j+1;
                break;
            }
            else if(a[j]==a[j+1]&&a[j+1]!=a[j+2])
            {
                diff=j+3;
                break;
            }
            else if(a[j]!=a[j+1]&&a[j+1]!=a[j+2])
            {
                diff=j+2;
                break;
            }
        }

        printf("%d\n",diff);
    }
    
    return 0;
}