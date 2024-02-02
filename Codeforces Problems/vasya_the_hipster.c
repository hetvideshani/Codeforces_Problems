#include<stdio.h>

int main()
{
    int a,b,max,min,x;

    scanf("%d%d",&a,&b);

    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }

    x=(max-min)/2;

    printf("%d %d",min,x);
    
    return 0;
}