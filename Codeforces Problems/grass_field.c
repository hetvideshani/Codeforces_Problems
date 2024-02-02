#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int a[2],b[2],count=0;

        for(j=0;j<2;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==1)
            {
                count++;
            }
        }
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[j]);
            if(b[j]==1)
            {
                count++;
            }
        }
        
        if(count==1)
        {
            printf("1\n");
        }
        else 
        {
            printf("%d\n",count/2);
        }
        
    }
    
    return 0;
}