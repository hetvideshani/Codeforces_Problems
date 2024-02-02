#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int a,b,c,op,div,min,max;
        scanf("%d%d%d",&a,&b,&c);

        if(a>b)
        {
            op=a-b;
            min=b;
            max=a;
        }
        else 
        {
            op=b-a;
            min=a;
            max=b;
        }

        div=op*2;

        if(c>op&&c<=div&&op!=1)
        {
            c=c-op;
        }
        else if(c<op&&c<=div&&op!=1)
        {
            c=op+c;
        }
        else if(c==op)
        {
            c=op*2;
        }
        else
        {
            c=-1;
        }

        printf("%d\n",c);

    }


    return 0;
}