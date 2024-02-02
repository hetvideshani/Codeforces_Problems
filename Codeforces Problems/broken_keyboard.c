#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,count;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        char s[x+1];
        scanf("%s",s);
        count=0;

        for(j=1;j<x;j=j+3)
        {
            if(s[j]!=s[j+1])
            {
                count=1;
                break;
            }
        }

        if(count==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    
    return 0;
}