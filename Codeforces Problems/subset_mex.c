#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j, count = 0;
        scanf("%d", &n);

        int a[n], k, flag = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n; j++)
        {
            flag = 0;
            for (k = 0; k < n; k++)
            {
                if (j == a[k])
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                count++;
                if (count == 2)
                {
                    printf("%d\n", j);
                    break;
                }
            }
        }
    }
}