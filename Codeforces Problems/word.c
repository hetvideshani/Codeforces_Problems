#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int countc=0,counts=0;
    char s[100],i;
    

    scanf("%s",s);

    
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            countc++;
        }
        else
        {
            counts++;
        }
    }

    if(counts>=countc)
    {
        strlwr(s);
    }
    else
    {
        strupr(s);
    }

    printf("%s",s);
    
    return 0;
}