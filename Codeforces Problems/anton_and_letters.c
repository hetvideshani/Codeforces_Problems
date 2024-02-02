#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,count=0,j,x,k,flag=0;
    char s[1001];

    scanf("%c%c",&s[0],&s[1]);
    i=1;

    while(s[i]!='}')
    {
        i++;
        scanf("%c",&s[i]);
    }

    i++;
    s[i]='\0';

    x=0;
    count=0;

    char a[(strlen(s)/3)+1];

    for(i=1;i<strlen(s);i+=3)
    {
        flag=0;
        for(j=0;j<=x;j++)
        {
            if(s[i]==a[j])
            {
                flag=1;
            }
        }
        if(flag==0 && s[i]<=122 && s[i]>=65)
        {
            x++;
            a[x]=s[i];
        }
    }
    x++;
    a[x]='\0';

    printf("%d",x-1);

    return 0;
}