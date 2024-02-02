#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, k, new, sum, flag = 0;
        scanf("%d%d", &n, &k);

        new = n;
        sum = n;

        for (int j = 0; j < k; j++)
        {
            flag = 0;
            for (int x = 2; x <= new / 2; x++)
            {
                if (new % x == 0)
                {
                    sum += x;
                    new = sum;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                sum += new;
                new = sum;
            }
        }

        printf("%d\n", sum);
    }
}