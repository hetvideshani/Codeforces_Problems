#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,j,k,a=1;
        scanf("%d",&n);

        char s[n+1],temp,max='z',*p;

        scanf("%s",s);

        for(j=0;j<n;j++)
        {
            temp=max;
            for(k=j;k<n;k++)
            {
                if(s[k]<=temp)
                {
                    temp=s[k];
                    s[k]=s[j];
                    s[j]=temp;
                }
            }
        }
        j=0;
        k=0;
        p=(char *)malloc(sizeof(char));
        p[0]=s[0];

        while(j<n)
        {
            for(k=0;k<a;k++)
            {
                if(s[j]!=p[k])
                {
                    a++;
                    p=(char *)realloc(p , a*sizeof(char));
                    p[a-1]=s[j];
                }
            }
            j++;
        }

        printf("%d\n",2*a);
    }
    return 0;
}