#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, k, same;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int flag = 0, x = 0, arr[5];
        char a[6], ch, b[6], temp;

        scanf("%c", &ch);
        for (int j = 0; j < 5; j++)
        {
            scanf("%c", &a[j]);
        }

        for (int j = 0; j < 5; j++)
        {
            for (int k = j; k < 5; k++)
            {
                if (a[j] > b[j])
                {
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }

        printf("%s", a);
    }

    return 0;
}