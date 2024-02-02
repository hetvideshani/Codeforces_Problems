#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i,j,x,k,temp,max,diff,res;
    scanf("%d",&t);
    int a[t],*p,*b,*d;
    p=(int *)calloc(t , sizeof(int));


    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);

        b=(int *)calloc(a[i], sizeof(int));

        d=(int *)calloc(a[i]-2, sizeof(int));

        for(j=0;j<a[i];j++)
        {
            scanf("%d",&b[j]);
        }

        max=b[0];

        for(j=0;j<a[i];j++)
        {
            if(b[j]>max)
            {
                max=b[j];
            }
        }

        for(j=0;j<a[i];j++)
        {
            temp=max;
            for(k=j;k<a[i];k++)
            {
                if(b[k]<=temp)
                {
                    temp=b[k];
                    b[k]=b[j];
                    b[j]=temp;
                }
            }
        }

        for(j=0;j<a[i]-2;j++)
        {
            d[j]=b[j+2]-b[j];
        }

        res=d[0];                                   //

        for(j=1;j<a[i]-2;j++)
        {
            if(d[j]<res)
            {
                res=d[j];
            }
        }

        p[i]=res;

        free(b);
        free(d);

    }

    for(i=0;i<t;i++)
    {
        printf("%d\n",p[i]);
    }

    return 0;
}
