#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, j = 1, flag = 0, final, count = 0;
        scanf("%d", &n);

        while (count < n)
        {
            if (j % 3 == 0)
            {
            }
            else if (j % 10 == 3)
            {
            }
            else
            {
                final = j;
                count++;
            }
            j++;
        }

        printf("%d\n", final);
    }
}