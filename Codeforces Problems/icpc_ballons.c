#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,k;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,countd=0,flag=0;
        scanf("%d",&n);

        char s[n+1];
        scanf("%s",s);

        for(j=0;j<n;j++)
        {
            flag=0;
            for(k=0;k<j;k++)
            {
                if(s[j]==s[k])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                countd++;
            }
        }

        printf("%d\n",(countd*2)+strlen(s)-countd);
    }
    
    return 0;
}