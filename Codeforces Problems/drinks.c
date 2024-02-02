#include<stdio.h>

int main()
{
    int n,i,count=0;
    double sum=0;
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        count++;
    }

    printf("%f",sum/count);
    
    return 0;
}