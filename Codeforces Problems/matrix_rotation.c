#include<stdio.h>

int main()
{
    int i,t,j,flag=0;
    scanf("%d",&t);
    int a[t];

    for(i=0;i<t;i++)
    {
        int mat[4],temp0,temp1,temp2,temp3,flag=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&mat[j]);
        }

        for(j=0;j<4;j++)
        {
            if(mat[0]<mat[1]&&mat[2]<mat[3]&&mat[0]<mat[2]&&mat[1]<mat[3])
            {
                flag=1;
                break;
            }
            else
            {
                temp0=mat[0];
                temp1=mat[1];
                temp2=mat[2];
                temp3=mat[3];

                mat[0]=temp2;
                mat[1]=temp0;
                mat[2]=temp3;
                mat[3]=temp1;
            }
        }
        if(flag==1)
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }

    for(i=0;i<t;i++)
    {
        if(a[i]==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    
    return 0;
}