#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,count=0,c=0;
        scanf("%d",&n);

        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);

            if(a[j]==2)
            {
                count++;
            }
        }

        if(count==0)
        {
            printf("%d\n",a[0]);
        }
        else if(count%2!=0)
        {
            printf("-1\n");
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(a[j]==2)
                {
                    c++;
                }
                if(c==count/2)
                {
                    break;
                }
            }
            printf("%d\n",j+1);
        }
    }
    
    return 0;
}