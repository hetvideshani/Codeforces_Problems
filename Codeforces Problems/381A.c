#include<stdio.h>

int main()
{
    int n,i,j,k=0,x=0;
    scanf("%d",&n);

    int a[n],b[k],c[x];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0,j=n-1 ; i<n/2 ; i++,j--)
    {
        if(a[i]>a[j])
        {
            b[k]=a[i];
        }
    }
    
    return 0;
}