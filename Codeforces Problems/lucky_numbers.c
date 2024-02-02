// #include <stdio.h>
// int main()
// {
//     int t, i;
//     scanf("%d", &t);

//     for (i = 0; i < t; i++)
//     {
//         int a, b, temp, max = 0, min = 9, rem, maxd, final = 0, j, digit;
//         scanf("%d%d", &a, &b);

//         for (j = a; j <= b; j++)
//         {
//             min = 9;
//             max = 0;
//             temp = j;
//             while (temp > 0)
//             {
//                 rem = temp % 10;
//                 if (rem <= min)
//                 { // 59  63
//                     min = rem;
//                 }
//                 if (rem >= max)
//                 {
//                     max = rem;
//                 }
//                 temp /= 10;
//             }
//             maxd = max - min;

//             if (maxd >= final)
//             {
//                 final = maxd;
//                 digit = j;
//             }
//         }

//         printf("%d\n", digit);
//     }
// }

#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int a, b, j, flag = 0, max = 0;
        scanf("%d%d", &a, &b);

        int min, temp, rem, maxd, final = 0, digit;
        for (j = a; j <= b; j++)
        {
            min = 9;
            max = 0;
            temp = j;
            while (temp > 0)
            {
                rem = temp % 10;
                if (rem <= min)
                { // 59  63
                    min = rem;
                }
                if (rem >= max)
                {
                    max = rem;
                }
                temp /= 10;
            }
            maxd = max - min;

            if (maxd >= final)
            {
                final = maxd;
                digit = j;
            }
        }

        printf("%d\n", digit);
    }
}
