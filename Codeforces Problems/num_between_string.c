#include<stdio.h>

int main()
{
    char c[100];
    int i,count;

    for(i=0;i<100 ;i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='\0')
        {
            break;
        }
    }

    for(i=0;c[i]!='\0';i++)
    {
        if(i>=1 && c[i]!='\0')
        {
            count++;
        }
    }

    printf("%c%d%c",c[0],count-1,c[count]);
    
    return 0;
}