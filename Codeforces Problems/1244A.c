#include<stdio.h>

int main()
{
    int t,i,j,x,y;

    scanf("%d",&t);

    int arr[t][5],res[t][2];

    for(i=0;i<t;i++)
    {
        for ( j=0 ; j<2 ; j++)
        {
            res[i][j]=0;
        }
    }

    for(i=0;i<t;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
        if(arr[i][0]%arr[i][2]!=0)
        {
            x=(arr[i][0]/arr[i][2]) + 1;
        }
        else
        {
            x=arr[i][0]/arr[i][2];
        }

        if(arr[i][1]%arr[i][3]!=0)
        {
            y=(arr[i][1]/arr[i][3]) + 1;
        }
        else
        {
            y=arr[i][1]/arr[i][3];
        }

        if(x+y <= arr[i][4])
        {
            res[i][0]=x;
            res[i][1]=y;
        }   
    }

    for(i=0;i<t;i++)
    {
        if(res[i][0]!=0)
        {
            printf("%d %d\n",res[i][0],res[i][1]);
        }
        else
        {
            printf("-1\n");
        }
    }

    
    return 0;
}