#include<stdio.h>

int main()
{
    long long int n;
    int count=0,digit;
    scanf("%lld",&n);

    while(n>0)
    {
        digit=n%10;
        n=n/10;
        if(digit==4||digit==7)
        {
            count++;
        }
    }

    if(count==4||count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
