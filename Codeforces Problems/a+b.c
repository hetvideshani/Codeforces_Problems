#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int ans[n];

    for(i=0;i<n;i++)
    {
        char s[4];
        scanf("%s",s);

        ans[i]=(int)s[0]+(int)s[2]-(2*48);
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",ans[i]);
    }
    
    return 0;
}