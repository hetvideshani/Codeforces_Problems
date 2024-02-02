#include <stdio.h>
int main()
{
    int n, a = 0, b = 0, max = 0;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (a < n)
    {
        while ((arr[b + 1] >= arr[b]) && (b + 1) < n)
        {
            b++; // 2 2 1 3 4 1
        }
        if ((b - a) > max)
        {
            max = b - a;
        }

        b++;
        a = b;
    }

    printf("%d", max + 1);
}