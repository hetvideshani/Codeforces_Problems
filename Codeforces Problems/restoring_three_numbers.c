#include<stdio.h>

int main()
{
    int a[4],i,min,max,x,y,z,digit=1;

    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            min=a[0];
            max=a[0];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    x=min-1;
    y=


    
    return 0;
}