#include <stdio.h>
#include <string.h>
int main()
{
    int t, total = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[20];
        scanf("%s", s);

        if (strcmp(s, "Tetrahedron") == 0)
        {
            total += 4;
        }
        else if (strcmp(s, "Cube") == 0)
        {
            total += 6;
        }
        else if (strcmp(s, "Octahedron") == 0)
        {
            total += 8;
        }
        else if (strcmp(s, "Dodecahedron") == 0)
        {
            total += 12;
        }
        else if (strcmp(s, "Icosahedron") == 0)
        {
            total += 20;
        }
    }

    printf("%d", total);
}