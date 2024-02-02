#include<stdio.h>

int main()
{
    int t,i,max,total=0;
    scanf("%d",&t);
    int a[t];

    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<t;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    for(i=0;i<t;i++)
    {
        if(a[i]<max)
        {
            total=total+max-a[i];
        }
    }

    printf("%d",total);

    return 0;
}
