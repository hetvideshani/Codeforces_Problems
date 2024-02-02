#include<stdio.h>

int main()
{
    int n,i,j,temp,sum=0,coin=0,count=0;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(count<sum/2)
        {
            count+=a[i];
            coin++;
        }
        if(count>sum/2)
        {
            break;
        }
    }
    
    if(count==sum/2)
    {
        printf("%d",coin+1);
    }
    else
    {
        printf("%d",coin);
    }
    
    return 0;
}