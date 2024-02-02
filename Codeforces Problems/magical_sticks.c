#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);

        if(n%2==0)
        {
            printf("%d\n",n/2);
        }
        else
        {
            printf("%d\n",(n/2)+1);
        }
    }
    
    return 0;
}