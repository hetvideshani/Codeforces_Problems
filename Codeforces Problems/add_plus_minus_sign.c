#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k=0,sum=0;
    scanf("%d",&n);

    int a[n];
    char *c,*p;
    

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=(char *)calloc(a[i]+1 , sizeof(char));
        p=(char *)calloc(a[i] , a[i]*sizeof(char));
        sum=0;
        scanf("%s",c);

        for(j=0;j<a[i]-1;j++)
        {
            if(c[j]=='0'&&c[j+1]=='0')
            {
                p[j]='+';
            }
            if(j==0)
            {
                if((c[j]=='0'&&c[j+1]=='1')||(c[j]=='1'&&c[j+1]=='0'))
                {
                    p[j]='+';
                    sum++;
                }
                else if(c[j]=='1'&&c[j+1]=='1')
                {
                    p[j]='-';
                }
                else
                {
                    p[j]='+';
                }
            }
            else if((c[j]=='0'&&c[j+1]=='1')||(c[j]=='1'&&c[j+1]=='0'))
            {
                if(sum==0&&c[j+1]=='1')
                {
                    p[j]='+';
                    sum++;
                }
                else if(sum==0&&c[j+1]=='0')
                {
                    p[j]='+';
                }
                else if(sum!=0&&c[j+1]=='0')
                {
                    p[j]='+';
                }
                else if(sum!=0&&c[j+1]=='1')
                {
                    p[j]='-';
                    sum--;
                }
                
            }
            else if(c[j]=='1'&&c[j+1]=='1')
            {
                if(sum==0)
                {
                    p[j]='+';
                    sum++;
                }
                else
                {
                    p[j]='-';
                    sum--;
                }
            }
        }

        printf("%s\n",p);
        
        free(c);
        free(p); 
    }

    return 0;
}