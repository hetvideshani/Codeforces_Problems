#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int n,k,count=0,flag=0,l,start=0,end=0,final=0;
        scanf("%d",&n);

        char s[n];
        
        scanf("%s",s); 

        for(j=0,k=n-1 ; j<n/2 ; j++,k--)
        {
            if(s[j]!=s[k])
            {
                end=k;
                break;
            }
        }

        if(end==0)
        {
            printf("YES\n");
            continue;
        }

        while(j<n/2)
        {
            if(s[j]==s[k])
            {
                flag=k;
                break;
            }
            j++;
            k--;
        }

        if(j==(n/2)+1)
        {
            flag=k;
        }

        for(l=k;l<=end;l++)
        {
            if(s[l]=='1')
            {
                s[l]='0';
            }
            else if(s[l]=='0')
            {
                s[l]='1';
            }
        }

        for(j=0,k=n-1;j<n/2;j++,k--)
        {
            if(s[j]!=s[k])
            {
                final=1;
                break;
            }
        } 

        if(final==0)
        {
            printf("YES\n");
        }     
        else if(final==1)
        {
            printf("NO\n");
        }

    }
    
    return 0;
}