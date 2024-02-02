#include<stdio.h>

int main()
{
    int t,i,gr1,gr2,count1=0,count2=0;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        count1=0;
        count2=0;
        int s1,s2,s3,s4;
        scanf("%d%d%d%d",&s1,&s2,&s3,&s4);

        if(s1>s2)
        {
            gr1=s2;
            if(s3>s4)
            {
                if(s1>s4)
                {
                    count1=1;
                }
            }
            else
            {
                if(s1>s3)
                {
                    count1=1;
                }
            }
        }
        else
        {
            gr1=s1;
            if(s3>s4)
            {
                if(s2>s4)
                {
                    count1=1;
                }
            }
            else
            {
                if(s2>s3)
                {
                    count1=1;
                }
            }
        }

        if(s3>s4)
        {
            if(s3>gr1)
            {
                count2=1;
            }
        }
        else
        {
            if(s4>gr1)
            {
                count2=1;
            }
        }

        if(count1==1 && count2==1)
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