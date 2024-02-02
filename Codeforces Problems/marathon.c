#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int a[4],max,count=0;

        for(j=0;j<4;j++)
        {
            scanf("%d",&a[j]);
        }

        max=a[0];

        for(j=1;j<4;j++)
        {
            if(a[j]>max)
            {
                count++;
            }
        }

        printf("%d\n",count);
    }
    
    return 0;
}