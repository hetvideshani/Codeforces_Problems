#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,countq=0,counta=0,i,j;
    scanf("%d",&n);

    char *p;
    int x[n],a[n];

    p=(char *)calloc(1 , sizeof(char));

    for(i=0;i<n;i++)
    {
        countq=0;
        counta=0;
        scanf("%d",&x[i]);
        p=(char *)realloc(p , x[i+1]*sizeof(char));

        for(j=0;j<x[i];j++)
        {
            scanf("%c",&p[j]);
            if(p[j]=='Q')
            {
                countq++;
            }
            else
            {
                counta++;
            }
        }

        if(counta>=countq && p[x[i]-1]!='Q' && p[0]=='A')
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }

        free(p);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
