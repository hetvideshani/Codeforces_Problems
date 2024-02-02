#include<stdio.h>

int main()
{
    int y,w,max,num,deno,a,b,i;
    scanf("%d%d",&y,&w);

    if(y>w)
    {
        max=y;
    }
    else
    {
        max=w;
    }

    num=6-max+1;
    deno=6;

    for(i=1;i<=6;i++)
    {
        if(num%i==0&&deno%i==0)
        {
            a=num/i;
            b=deno/i;
        }
    }
    
    printf("%d/%d",a,b);
    
    return 0;
}