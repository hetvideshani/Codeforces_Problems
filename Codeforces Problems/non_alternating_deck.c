#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,ca=1,cb=0,j;
        scanf("%d",&n);

        for(j=2;(ca+cb)<n;j+=2)
        {
            if(j%4==0&&j>=4)
            {
                cb=cb+(2*j)+1;
            }
            else if(j%2==0)
            {
                ca=ca+(2*j)+1;
            }
        }

        printf("%d %d\n",ca,cb);
    }
    
    return 0;
}