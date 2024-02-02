import java.util.*;

public class promo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, q, i;

        n = sc.nextInt();
        q = sc.nextInt();

        long[] a = new long[n];
        long msum = 0;

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            msum += a[i];
        }

        Arrays.sort(a);

        for (i = 0; i < q; i++) {
            int x, y, j, c;
            long sum = 0;
            // 1 2 3 5 5
            x = sc.nextInt();
            y = sc.nextInt();

            if (x == n && y > n / 2) {
                for (c = n - 1; c > n - y; c--) {
                    msum -= a[c];
                }

                System.out.println(msum);
                continue;
            }

            j = n - x;
            c = 0;
            for (c = 0; c < y; j++, c++) {
                sum += a[j];
            }

            System.out.println(sum);
        }
    }
}