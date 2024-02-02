#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        char *s,*r,*new,k=0;

        s=(char *)malloc(101*sizeof(char));
        r=(char *)malloc(201*sizeof(char));

        scanf("%s",s);

        strcpy(r,s);

        strrev(s);

        strcat(r,s);
        
        printf("%s\n",r);
        
        free(s);
        free(r);
    }
    
    return 0;
}