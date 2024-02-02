#include<stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int a,b,j=2,k,mainc=0,count=0;
        scanf("%d",&a);

        while(1)
        {
            mainc=0;
            count=0;
            for(k=2;k<=j/2;k++)
            {
                if(j%k==0)
                {
                    count=1;
                }
            }
            if(count==0&&j!=a)
            {
                for(k=2;k<=(a+j)/2;k++)
                {
                    if((a+j)%k==0)
                    {
                        mainc=1;
                    }
                    if(mainc==1)
                    {
                        break;
                    }
                }
            }
            if(mainc==1)
            {
                break;
            }
            j++;
        }

        printf("%d\n",j);
    }
    
    return 0;
}