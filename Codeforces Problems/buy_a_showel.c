#include<stdio.h>

int main()
{
    int k,r,i=1,total=0,digit=0,n=1,x,a;

    scanf("%d%d",&k,&r);
    /*
    while (digit>10)
    {
        digit=k%10;
        k=k/10;
    }
    */
    a=k;
    while(n>0)
    {
        k=a;
        x=k*i;
        digit=x%10;
        while (digit>10)
        {
            digit=k%10;
            k=k/10;
        }
        if(digit==r||digit==0)
        {
            total++;
            break;
        }
        else
        {
            total++;
            i++;
        }
    }

    printf("%d",total);


    return 0;
}