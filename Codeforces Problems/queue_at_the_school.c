#include<stdio.h>

int main()
{
    int n,t,i,j;

    scanf("%d%d",&n,&t);

    char s[n+1];

    scanf("%s",s);

    for ( i = 1; i <= t; i++)
    {
        j=0;
        while(j<n)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j=j+2;
            }
            else
            {
                j++;
            }
        }  
    }

    printf("%s",s);
    
    
    return 0;
}