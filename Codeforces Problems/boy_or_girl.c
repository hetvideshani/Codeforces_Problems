#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int flag,a=1,i=0,j,count=0;
    char s[101],*ch;

    ch=(char *)malloc(a*sizeof(char));
    
    scanf("%s",s);
    ch[0]=s[0];

    for(i=0;s[i]!='\0';i++)
    {
        flag=0;
        for(j=0;j<a;j++)
        {
            if(s[i]==ch[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            a++;
            ch=(char *)realloc(ch, a*sizeof(char));
            ch[a-1]=s[i];
        }
    }

    a++;
    ch=(char *)realloc(ch, a*sizeof(char));
    ch[a-1]='\0';
    
    if(strlen(ch)%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    
    
    return 0;
}