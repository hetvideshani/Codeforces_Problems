#include<stdio.h>

int main()
{
    int t,i,j,counta,countb;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        counta=0;
        countb=0;

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==0)
            {
                counta++;
            }
        }
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
            if(b[j]==0)
            {
                countb++;
            }
        }

        if(counta==countb)
        {
            printf("0\n");
        }
        else if(counta<countb)
        {
            printf("%d\n",countb-counta);
        }
        else if(countb<counta)
        {
            printf("%d\n",counta-countb);
        }
    }
    
    return 0;
}