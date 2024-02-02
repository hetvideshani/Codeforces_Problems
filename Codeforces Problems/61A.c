#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[101],s2[101],s3[101];
    scanf("%s",s1);
    scanf("%s",s2);

    for(i=0 ; s1[i]!='\0' ; i++)
    {
        if(s1[i]==s2[i])
        {
            s3[i]='0';
        }
        else
        {
            s3[i]='1';
        }
        printf("%c",s3[i]);
    }

    return 0;

}

