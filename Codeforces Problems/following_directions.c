#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,x=0,y=0,flag=0;
        scanf("%d",&n);

        char s[n+1];
        scanf("%s",s);

        for(j=0;j<n;j++)
        {
            if(s[j]=='U')
            {
                y++;
                if(x==1&&y==1)
                {
                    printf("YES\n");
                    flag=1;
                    break;
                }
            }
            else if(s[j]=='R')
            {
                x++;
                if(x==1&&y==1)
                {
                    printf("YES\n");
                    flag=1;
                    break;
                }
            }
            else if(s[j]=='L')
            {
                x--;
                if(x==1&&y==1)
                {
                    printf("YES\n");
                    flag=1;
                    break;
                }
            }
            else if(s[j]=='D')
            {
                y--;
                if(x==1&&y==1)
                {
                    printf("YES\n");
                    flag=1;
                    break;
                }
            }
        }

        if(flag==0)
        {
            printf("NO\n");
        }

    }
    
    return 0;
}