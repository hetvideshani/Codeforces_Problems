#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,x,i,j,*p,digit=0,rep,flag=0;
    scanf("%d",&x);
    x=x+1;
    while(x>0)
    {
        m=x;
        n=x;
        flag=0;
        digit=0;

        while(n>0)
        {
            digit++;
            n=n/10;
        }

        p=(int *)calloc(digit , sizeof(int));

        for(i=0;i<digit;i++)
        {
            p[i]=m%10;
            m=m/10;
        }

        for(i=0;i<digit;i++)
        {
            for(j=i+1;j<digit;j++)
            {
                if(p[i]==p[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }

        if(flag==0)
        {
            break;
        }

        free(p);

        x++;
    }

    printf("%d",x);
    return 0;
}
