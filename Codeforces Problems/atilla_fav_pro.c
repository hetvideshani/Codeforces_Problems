#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i,j,ans,x,y;
    scanf("%d",&t);

    int n[t];
    char *p,ch;

    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        p=(char *)calloc(n[i]+1 , sizeof(char));
        scanf("%s",p);
        ans=p[0];
        y=p[0];                           
        for (j=0 ; j<n[i] ; j++)
        {
            x=p[j];                           
            if(x>=y)                          
            {
                y=x;
                ans=x-96;                      
            }
        }
        printf("%d\n",ans);

        free(p);
    }
    
    return 0;
}