#include <stdio.h>
int main()
{
    long long int n, m, a, countn = 0, countm = 0, temp;
    scanf("%lld%lld%lld", &n, &m, &a);

    temp = a;

    if (n % temp == 0)
    {
        countn = n / temp;
    }
    else
    {
        countn = (n / temp) + 1;
    }

    if (m % temp == 0)
    {
        countm = m / temp;
    }
    else
    {
        countm = (m / temp) + 1;
    }

    countm--;

    countm *= countn;

    printf("%lld", countn + countm);
}