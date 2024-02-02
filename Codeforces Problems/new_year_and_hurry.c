#include<stdio.h>

int main()
{
    int n,k,i,min=0,time=0,x;

    scanf("%d%d",&n,&k);

    x=240-k;

    for(i=1;i<=n;i++)
    {
        time=time+5*i;               

        if(x-time<0)           
        {
            break;
        }
        else
        {
            min++;                  
        }
    }

    printf("%d",min);
    
    return 0;
}