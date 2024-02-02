#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,j,k,final;
        scanf("%d",&n);
        final=n;

        char s[n+1];
        scanf("%s",s);

        for(j=0,k=n-1;j<n/2;j++,k--)
        {
            if(s[j]=='1'&&s[k]=='0')
            {
                final-=2;
            }
            else if(s[j]=='0'&&s[k]=='1')
            {
                final-=2;
            }
            else
            {
                break;
            }
        }

        printf("%d\n",final);

    }
    
    return 0;
}