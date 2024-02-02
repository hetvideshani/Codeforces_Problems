#include<stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    while(n>0)
    {
        if(n>=100)
        {
            n=n-100;
        }
        else if(n>=20)
        {
            n=n-20;
        }
        else if(n>=10)
        {
            n=n-10;
        }
        else if(n>=5)
        {
            n=n-5;
        }
        else if(n>=1)
        {
            n=n-1;
        }

        count++;
    }

    printf("%d",count);
    
    return 0;
}