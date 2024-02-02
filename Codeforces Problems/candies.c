#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x = 1;
        scanf("%d", &n);

        long int sum = 0;

        while (n % (sum + (int)pow(2, x)) == 0)
        {
            sum += pow(2, x);
            x++;
        }

        printf("%d\n", x);
    }
    return 0;
}