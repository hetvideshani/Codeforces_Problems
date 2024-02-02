#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        char s[4];
        scanf("%s",s);

        strlwr(s);

        if(strcmp(s,"yes")==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}