#include<stdio.h>

int main()
{
    int a,b,c,max,min,mid;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            max=a;
            if(b>c)
            {
                mid=b;
                min=c;
            }
            else
            {
                mid=c;
                min=b;
            }
        }
        else
        {
            max=c;
            if(a>b)
            {
                mid=a;
                min=b;
            }
            else
            {
                mid=b;
                min=a;
            }
        }
    }
    else
    {
        if(b>c)
        {
            max=b;
            if(a>c)
            {
                mid=a;
                min=c;
            }
            else
            {
                mid=c;
                min=a;
            }
        }
        else
        {
            max=c;
            if(a>b)
            {
                mid=a;
                min=b;
            }
            else
            {
                mid=b;
                min=a;
            }
        }
    }

    printf("%d",max-min);

    
    return 0;
}

