#include<stdio.h>

int main()
{
    int t,i,countm=0,countc=0;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);

        if(a>b)
        {
            countm++;
        }
        else if(b>a)
        {
            countc++;
        }
    }

    if(countm>countc)
    {
        printf("Mishka");
    }
    else if(countc>countm)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }

    
    return 0;
}