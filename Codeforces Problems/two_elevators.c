#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int a,b,c,t,final;
        scanf("%d%d%d",&a,&b,&c);

        if(b<c)
        {
            t=2*c-b;
        }                           
        else if(b>c)
        {
            t=b-1;
        }

        if(a<t||a==1)
        {
            printf("1\n");
        }
        else if(a>t)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    
    return 0;
}