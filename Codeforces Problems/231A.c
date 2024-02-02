#include<stdio.h>

int main()
{
    int n,i,j,add,sum=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        add=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                add++;
            }
        }
        if(add>=2)
        {
            sum++;
        }
    }

    printf("%d",sum);
    
    return 0;
}