#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,x,j=1;
        scanf("%d%d",&n,&x);

        n=n-2;

        while(n>0)
        {
            n=n-x;
            j++;
        }
        printf("%d\n",j);
    }
    
    return 0;
}