#include <stdio.h>

int main()
{
    int t, i, j, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, j, k, count = 0, size = 0, flag = 0;
        scanf("%d", &n);

        int a[n], new[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        j = n - 1;
        new[size] = a[j];
        size++;

        j--;

        while (j >= 0)
        {
            k = 0;
            flag = 0;
            while (k < size)
            {
                if (new[k] == a[j])
                {
                    flag = 1;
                    break;
                }
                k++;
            }
            if (flag == 1)
            {
                break;
            }
            else
            {
                new[size] = a[j];
                size++;
            }

            j--;
        }

        printf("%d\n", j + 1);
    }
}