#include <stdio.h>
int main()
{
    int s, n, flag = 0;
    scanf("%d%d", &s, &n);

    int a[n][2], temp1, temp2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    temp1 = a[0][0];
    temp2 = a[0][1];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i][0] >= a[j][0])
            {
                temp1 = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = temp1;

                temp2 = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = temp2;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s > a[i][0])
        {
            s += a[i][1];
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}