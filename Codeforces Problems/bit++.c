#include<stdio.h>

int main()
{
    int t,i,sum=0;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        char s[4];
        scanf("%s",s);
        
        if(s[0]=='+' && s[1]=='+')
        {
            sum++;
        }
        if(s[1]=='+' && s[2]=='+')
        {
            sum++;
        }
        if(s[0]=='-' && s[1]=='-')
        {
            sum--;
        }
        if(s[1]=='-' && s[2]=='-')
        {
            sum--;
        }
    }

    printf("%d",sum);
 
    return 0;
}