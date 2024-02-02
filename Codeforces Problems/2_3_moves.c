#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,ans;
        scanf("%d",&n);

        while(n>0)
        {
            if(n%3==0)
            {
                ans=n/3;
                if(n>0)
                {
                    ans=(-1)*ans;
                } 
            }
            else if(n%2==0)
            {
                ans=n/2;
                if(n>0)
                {
                    ans=(-1)*ans;
                } 
            }
        }

    }
    
    return 0;
}