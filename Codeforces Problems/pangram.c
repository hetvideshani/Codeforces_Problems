#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,flag;
    scanf("%d",&n);

    char s[n+1],a,b;

    scanf("%s",s);

    if(n<26)
    {
        printf("NO");
    }
    else
    {
        strupr(s);
        for(a='A';a<='Z';a++)
        {
            flag=0;

            for(i=0;i<strlen(s);i++)
            {
                if(s[i]==a)
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0)
            {
                break;
            }
        }

        if(flag==0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    
    return 0;
}