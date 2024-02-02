#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,count=0;
        j=10;
        scanf("%d",&n);
        while(n>=10)
        {
            count=count+9;
            n=n/10;
        }
        count=count+n;

        printf("%d\n",count);
    }
    
    return 0;
}