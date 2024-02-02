#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        char s[101];
        scanf("%s",s);

        printf("%c",s[0]);

        for(j=1;j<strlen(s)-2;j+=2)
        {
            printf("%c",s[j]);
        }
        
        printf("%c",s[strlen(s)-1]);
        printf("\n");
    }
    
    return 0;
}