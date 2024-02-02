#include<stdio.h>

int main()
{
    int t,i,j;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,k,l,gdc=0,x=1,count=0,flag=0;
        scanf("%d",&n);
        int a[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);                          
        }

        for(j=0;j<n;j++)
        {
            for(k=j;k<n;k++)
            {
                gdc=0;
                count=0;
                for(l=j; l<=k ; l++)
                {
                    count++;
                }
                if(count>=2)
                {
                    x=1;
                    for(l=j ; l<=k ; k++)
                    {
                        if(a[l]%x==0)
                        {
                            if(a[l]<x)
                            {
                                gdc=a[l];
                            }
                            else
                            {
                                gdc=x;
                            }
                            x=gdc;
                        }
                        else
                        {
                            gdc=1;
                        }
                    }
                    if(gdc>count)
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
            if(flag==1)
            {
                break;
            }
        }

        if(flag==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
    }
    
    return 0;
}