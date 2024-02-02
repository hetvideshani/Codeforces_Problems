#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);

        int a[n],j=0,ans=0,count=0;

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==-1)
            {
                count++;
            }
        }

        j=0;

        
        if(count==0)
        {
            a[0]=-1;
            a[1]=-1;

        }

        else
        {
            while(j<n-1)
            {
                if(a[j]==-1&&a[j+1]==-1)
                {
                    a[j]=1;
                    a[j+1]=1;
                    break;
                }
                j++;
            }

        }

        for(j=0;j<n;j++)
        {
            ans+=a[j];
        }

        printf("%d\n",ans);
    }

    return 0;
}