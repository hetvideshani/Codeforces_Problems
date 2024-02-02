#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,k=0;
        scanf("%d",&n);
        char *p,c;

        char a[n+1];
        scanf("%s",a);

        p=(char *)malloc(sizeof(char));

        while(j<strlen(a))
        {
            if(a[j+2]!='0')
            {
                p[k]=a[k]+48;
                k++;
                p=(char *)realloc(p,k*sizeof(char));
                j++;
            }
            else if(a[j+2]=='0')
            {
                c=(a[j]*10)+a[j+1];
                p[k]=96+c;
                k++;
                p=(char *)realloc(p,k*sizeof(char));
                j+=2;
            }
        }

        printf("%s\n",p);

    }



    return 0;
}
