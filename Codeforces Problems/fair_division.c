#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,sum=0;
        scanf("%d",&n);

        int a[n],count1=0,count2=0;

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
            if(a[j]==2)
            {
                count2++;
            }
            else
            {
                count1++;
            }
        }

        if(sum%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            if(count1==0&&n%2!=0)
            {
                printf("NO\n");
            }
            else if(count1%2==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}