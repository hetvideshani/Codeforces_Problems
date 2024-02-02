#include<stdio.h>

int main()
{
    int t,i,max=0,min=0,imin=0,imax=0,ans=0;
    scanf("%d",&t);
    int a[t];

    for(i=0;i<t;i++)
    {
    scanf("%d",&a[i]);
    }

    max=a[0];
    min=a[0];

    for(i=0;i<t;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            imin=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            imax=i;
        }
    }

    if(imax==0&&imin==t-1)
    {
        printf("0");
        return 0;
    }

    if(imin<imax)
    {
        ans=imax;               //6
        ans=ans+(t-imin)-2;            // 6+
    }

    else
    {
        ans=imax;
        ans=ans+(t-1)-imin;
    }

    printf("%d",ans);

    return 0;
}
