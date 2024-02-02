#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,digit,ex,x=9,count=0;
        scanf("%d",&n);

        ex=n;

        while(n>10)
        {
            digit=n%10;

            if(digit<x)
            {
                x=digit;
            }

            count++;
            n=n/10;
        }
        count++;

        if(n<x)
        {
            x=n;
        }

        if(count==2)
        {
            printf("%d\n",ex%10);
        }
        else
        {
            printf("%d\n",x);
        }

        
    }
    
    return 0;
}