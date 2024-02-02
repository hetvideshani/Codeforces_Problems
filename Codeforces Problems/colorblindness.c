#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,flag=0,c=0;
        scanf("%d",&n);
        char a[n+1],b[n+1];

        scanf("%s",a);
        scanf("%s",b);

        for(j=0;j<n;j++)
        {
            if(a[j]==b[j]||a[j]-b[j]==5||a[j]-b[j]==(-5))
            {
                c++;
            }
            else
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }

    }
    
    return 0;
}