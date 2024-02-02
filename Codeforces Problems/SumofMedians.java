import java.util.*;

public class SumofMedians {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(), j = 0;

        while (j < t) {
            int n, k, i;
            n = sc.nextInt();
            k = sc.nextInt();

            long[] a = new long[n * k];
            long sum = 0;

            for (i = 0; i < n * k; i++) {
                a[i] = sc.nextInt();
            }

            // for (i = 0; i < n * k; i++) {
            // System.out.print(a[i] + " ");
            // }

            int count = 0;
            i = (n * k) - (n / 2) - 1;
            for (count = 0; count < k && i >= 0; count++, i -= (n / 2) + 1) {
                sum += a[i];
                // System.out.print(a[i] + " ");
            }

            // System.out.println();
            System.out.println(sum);

            j++;
        }
    }
}