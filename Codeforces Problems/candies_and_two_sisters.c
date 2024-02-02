#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    int a[t];

    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);

        if(x%2==0)
        {
            a[i]=(x/2)-1;
        }
        else
        {
            a[i]=x/2;
        }
    }

    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
