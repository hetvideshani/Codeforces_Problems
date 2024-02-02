#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);

        int a[n],max,min;
        scanf("%d",&a[0]);

        if(n==1)
        {
            printf("0\n");
            continue;
        }

        max=a[0];
        min=a[0];

        for(j=1;j<n;j++)
        {
            scanf("%d",&a[j]);

            if(a[j]>max)
            {
                max=a[j];
            }
            if(a[j]<min)
            {
                min=a[j];
            }
        }

        printf("%d\n",max-min);
    }
    
    return 0;
}