#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int j = 0, max = 0;
        char a[51], b[51];
        scanf("%s%s", a, b);

        strrev(a);
        strrev(b);

        while (j < strlen(a) || j < strlen(b))
        {
            if (a[j] != b[j])
            {
                if (a[j] > b[j])
                {
                    max = 2;
                    break;
                }
                else
                {
                    max = 1;
                    break;
                }
            }
            else if (j == strlen(a) && j < strlen(b))
            {
                max = 2;
                break;
            }
            else if (j < strlen(a) && j == strlen(b))
            {
                max = 1;
                break;
            }
            else
            {
                j++;
            }
        }

        if (a[0] == 'L' && b[0] == 'L')
        {
            if (max == 2)
            {
                printf(">\n");
            }
            else if (max == 1)
            {
                printf("<\n");
            }
            else
            {
                printf("=\n");
            }
        }
        else
        {
            if (max == 1)
            {
                printf(">\n");
            }
            else if (max == 2)
            {
                printf("<\n");
            }
            else
            {
                printf("=\n");
            }
        }
    }
}