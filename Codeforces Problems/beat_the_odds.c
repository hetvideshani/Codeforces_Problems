#include <stdio.h>

int main()
{
    int t, i, j, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, k, flag = 0;
        scanf("%d", &n);
        int a[n], count = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        if (n == 1)
        {
            if (n % 2 == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
            }
            continue;
        }
        // else if(n==2)
        // {
        //     if((a[0]%2==0&&a[1]%2==0)||(a[0]%2!=0&&a[1]%2!=0))
        //     {
        //         printf("0\n");
        //     }
        //     else
        //     {
        //         printf("1\n");
        //     }
        //     continue;
        // }

        // j=0;

        // while(j<n-1)
        // {
        //     if((a[j]%2==0&&a[j+1]%2==0)||(a[j]%2!=0&&a[j+1]%2!=0))
        //     {
        //         j++;
        //     }
        //     else if((a[j]%2==0&&a[j+1]%2!=0)||a[j]%2!=0&&a[j+1]%2==0)
        //     {
        //         count++;
        //         a[j+1]=a[j];
        //         j++;
        //     }
        // }

        if (a[0] % 2 == 0)
        {
            flag = 1;
        }

        if (flag == 1)
        {
            for (j = 0; j < n; j++)
            {
                if (a[j] % 2 != 0)
                {
                    count++;
                }
            }
        }
        else
        {
            for (j = 0; j < n; j++)
            {
                if (a[j] % 2 == 0)
                {
                    count++;
                }
            }
        }

        if (count > n - count)
        {
            printf("%d\n", n - count);
        }
        else
        {
            printf("%d\n", count);
        }
    }

    return 0;
}