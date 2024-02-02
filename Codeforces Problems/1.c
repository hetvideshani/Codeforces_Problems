#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,countq=0,counta=0,i,j,k,flag=0;
    scanf("%d",&n);

    char *p;
    int x[n],a[n];


    for(i=0;i<n;i++)
    {
        countq=0;
        counta=0;
        scanf("%d",&x[i]);

        p=(char *)calloc(x[i]+1 , sizeof(char));

        scanf("%s",&p[i]);

        for(j=0;j<x[i];j++)
        {
            if(p[j]=='Q')
            {
                countq++;
            }
            else
            {
                counta++;
            }
        }


        if(counta>=countq && p[x[i]-1]=='A' && p[0]=='Q')
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
