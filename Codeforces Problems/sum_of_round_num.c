#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,digit,sum=0,count=0,*p,a=1,x=10;
        scanf("%d",&n);

        
        if(n<=10)
        {
            printf("1\n%d",n);
        }

        else
        {
            p=(int *)malloc(sizeof(int));

            while(n>0)
            {
                digit=n%x;                  // 5009 10 = 9      
                
                n=n-digit;                   // 5000
                x=x*10;                        // 100

                if(digit!=0)
                {
                    count++;                // count 1
                    p[a-1]=digit;           // p[0] = 9
                    
                    a++;
                    p=(int * )realloc(p,a*sizeof(int));

                }
            }

            printf("%d\n",count);

            for(j=0;j<count;j++)
            {
                printf("%d ",p[i]);
            }

            free(p);
        }

       
    }
    
    return 0;
}