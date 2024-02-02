#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n == 2 || n == 3 || n == 4)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }
}