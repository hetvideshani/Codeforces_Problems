#include<stdio.h>

int main()
{
    int s[4],i,j,count=0;

    scanf("%d%d%d%d",&s[0],&s[1],&s[2],&s[3]);

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
    }
    
    return 0;
}