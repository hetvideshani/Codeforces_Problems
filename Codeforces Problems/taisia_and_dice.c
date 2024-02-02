#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, s, r, j, temp;

        scanf("%d%d%d", &n, &s, &r);

        temp = s - r;

        printf("%d ", temp);

        temp = s - temp;

        for (j = 1; j < n - 1; j++)
        {
            temp--;
            printf("1 ");
        }

        printf("%d\n", temp);
    }
}