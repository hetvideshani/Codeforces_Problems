#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    for(i=0;i<strlen(s)-2;i++)                        
    {
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
        {
            count++;
        }
    }

    printf("%d",count);
    
    return 0;
}