#include<stdio.h>

int main()
{
    int n,i=0,j,first,last,counts=0,countd=0,x=1;
    scanf("%d",&n);
    int a[n];
    first=0;
    last=n-1;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    i=first;
    j=last;

    while(i<=last)                          
    {
        if(x%2!=0)
        {
            if(a[i]>a[j])
            {
                counts=counts+a[i];
                first=i+1;
            }
            else
            {
                counts=counts+a[j];             
                last=j-1;                       
            }
        }
        else
        {
            if(a[i]>a[j])
            {
                countd=countd+a[i];             
                first=i+1;                      
            }
            else
            {
                countd=countd+a[j];
                last=j-1;
            }
        } 
        x++;
        i=first;
        j=last; 
    }

    printf("%d %d",counts,countd);

    return 0;
}