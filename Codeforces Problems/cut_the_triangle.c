#include<stdio.h>

int main()
{
    int t,i,j,k;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        char ch;
        scanf("%c",&ch);

        int a[3][2],midx=0,midy=0;

        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&a[j][k]);
            }
        }


        midx=(a[0][0]>=a[1][0])?((a[0][0]>=a[2][0])?((a[1][0]>=a[2][0])?1:2):0):((a[2][0]>=a[0][0])?((a[1][0]>=a[2][0])?2:1):0);

        midy=(a[0][1]>=a[1][1])?((a[0][1]>=a[2][1])?((a[1][1]>=a[2][1])?1:2):0):((a[2][1]>=a[0][1])?((a[1][1]>=a[2][1])?2:1):0);

        if(midx==midy)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }
    
    return 0;
}