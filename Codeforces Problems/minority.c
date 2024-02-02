#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[1000000];
        scanf("%s", s);

        if (strlen(s) == 1 || strlen(s) == 2)
        {
            printf("0\n");
        }
        else
        {
            int countp = 0, countz = 0;
            for (int i = 0; i < strlen(s); i++)
            {
                if (s[i] == '0')
                {
                    countz++;
                }
                else
                {
                    countp++;
                }
            }
            if (countp == 0 || countz == 0)
            {
                printf("0\n");
            }
            else if (countp < countz)
            {
                printf("%d\n", countp);
            }
            else if (countp > countz)
            {
                printf("%d\n", countz);
            }
            else
            {
                printf("%d\n", countp - 1);
            }
        }
    }
}