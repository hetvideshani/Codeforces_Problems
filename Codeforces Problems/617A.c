#include<stdio.h>

int main()
{
    int x,sum=0;
    scanf("%d",&x);

    if(x>=5)
    {
        sum=sum+(x/5);
        x=x%5;
    }
    if(x==4)
    {
        sum=sum+1;
    }
    else if(x==3)
    {
        sum=sum+1;
    }
    else if(x==2)
    {
        sum=sum+1;
    }
    else if(x==1)
    {
        sum=sum+1;
    }

    printf("%d",sum);
    
    return 0;
}