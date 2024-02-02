#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],*p;

    for(i=0;i<n;i++)
    {
        p=(int *)calloc(3, sizeof(int));
        scanf("%d%d%d",&p[0],&p[1],&p[2]);

        if(p[0]<p[1] && p[0]<p[2])
        {
            if(p[1]<p[2])
            {
                a[i]=p[1];
            }
            else
            {
                a[i]=p[2];
            }
        }
        else if(p[1]<p[2] && p[1]<p[0])
        {
            if(p[0]<p[2])
            {
                a[i]=p[0];
            }
            else
            {
                a[i]=p[2];
            }
        }
        else
        {
            if(p[0]<p[1])
            {
                a[i]=p[0];
            }
            else
            {
                a[i]=p[1];
            }
        }

        free(p);
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
