#include<stdio.h>

int main()
{
    int a,b,count=0;

    scanf("%d%d",&a,&b);

    if(a==b)
    {
        printf("1");
    }
    else
    {
        while (a<=b)
        {
            a=3*a;
            b=2*b;
            count++;
        }

        printf("%d",count);
    }

    return 0;
}