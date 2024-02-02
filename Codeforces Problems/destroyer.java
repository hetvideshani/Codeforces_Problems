import java.util.*;

public class destroyer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            int n, k, j, count = 0, fg = 0, pc = 0, flag = 0;
            n = sc.nextInt();

            int[] a = new int[n];

            for (j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }

            if (n == 1 && a[0] == 0) {
                System.out.println("YES");
                continue;
            } else if (n == 1 && a[0] != 0) {
                System.out.println("NO");
                continue;
            }

            Arrays.sort(a); // 0 0 0 0 1 1 1 2 2

            j = 0;
            count = 0;

            // while (j < n - 1 && a[j] == 0) {
            // j++;
            // count++;
            // }

            // pc = count;

            // k = j + 1; // 0 0 0 0 1 1 1 2 2
            // if (j == n - 1 && a[j] == 0) {
            // System.out.println("YES");
            // continue;
            // }
            // if (a[j] != 1) {
            // flag = 1;
            // }

            // while (j < n && k < n && flag == 0) {
            // count = 1;
            // while (a[j] == a[k]) {
            // k++;
            // if (k == n) {
            // fg = 1;
            // break;
            // }
            // count++;
            // }
            // if (fg == 1 && count <= pc) {
            // break;
            // } else if (fg == 1 && count > pc) {
            // flag = 1;
            // break;
            // }
            // if (count <= pc && a[k] == a[j] + 1) {
            // pc = count;
            // } else {
            // flag = 1;
            // break;
            // }
            // j = k;
            // k++;
            // }

            // if (flag == 0) {
            // System.out.println("YES");
            // } else {
            // System.out.println("NO");
            // }
        }

    }
}

// #include<stdio.h>

// int main()
// {
// int t;
// scanf("%d", &t);

// for (int i = 0; i < t; i++)
// {
// int n,min,max;
// scanf("%d", &n);

// int a[n];

// for (int j = 0; j < n; j++)
// {
// scanf("%d", &a[j]);
// }
// min=

// }
// }