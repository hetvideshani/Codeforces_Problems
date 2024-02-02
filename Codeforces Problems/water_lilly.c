#include <stdio.h>
int main()
{
    long long int h, l;

    scanf("%lld%lld", &h, &l);

    printf("%f", ((l * l) - (h * h)) / (2.0 * h));
}