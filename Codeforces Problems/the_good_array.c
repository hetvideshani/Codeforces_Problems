#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int n, k, ans = 0;
        scanf("%d%d", &n, &k);

        if (k == 1)
        {
            printf("%d\n", n);
        }

        else if (k == 2)
        {
            if (n % k == 0)
            {
                printf("%d\n", n / k);
            }
            else
            {
                printf("%d\n", (n / k) + 1);
            }
        }

        else
        {
            n -= 1;
            ans += n / k;

            if (n % k == 0)
            {
                ans += 1;
            }
            else
            {
                ans += 2;
            }
            printf("%d\n", ans);
        }
    }
}

// // 10 4
// //  1 0 0 0 1 1 1 1 1 1

// // 5/4 = 1.25

// #include <stdio.h>
// int main()
// {
//     int m;
//     scanf("%d", &m);
//     for (int c = 0; c < m; c++)
//     {
//         int n = 0, k = 0;
//         scanf("%d %d", &n, &k);
//         int cnt = 0;
//         for (int a = 0; a < n; a++)
//         {
//             if (a == 0 || a == n - 1 || a % k == 0)
//             {
//                 cnt++;
//             }
//         }
//         printf("%d\n", cnt);
//     }

//     return 0;
// }