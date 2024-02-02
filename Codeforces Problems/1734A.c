#include<stdio.h>

int main()
{
    int t,i,j,n,k,temp,max,x=0;
    scanf("%d",&t);
    int *p,*b;
    p=(int*)calloc(1,sizeof(int));
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        b=(int *)calloc(n,sizeof(int));
        p=realloc(p ,x);
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        max=b[0];

        for(j=0;j<n;j++)
        {
            if(b[j]>max)
            {
                max=b[j];
            }
        }
        for(j=0;j<n;j++)
        {
            temp=max;
            for(k=j;k<n;k++)
            {
                if(b[k]<=temp)
                {
                    temp=b[k];
                    b[k]=b[j];
                    b[j]=temp;
                }
            }
        }
        p[x-1]=max;
        free(b);
        x++;
    }

    for(i=0;i<x-1;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",p[j]);
        }
        printf("\n");
    }

    return 0;
}
