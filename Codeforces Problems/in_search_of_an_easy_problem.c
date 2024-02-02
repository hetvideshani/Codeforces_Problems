#include<stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]==1)
        {
            count=1;
        }
    }
    
    if(count==1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}