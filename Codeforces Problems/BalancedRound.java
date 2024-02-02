import java.util.*;

public class BalancedRound {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int i, j, count = 1, max = 0;
            int n = sc.nextInt();
            long k = sc.nextInt();
            long[] a = new long[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            if (n == 1) {
                System.out.println("0");
                continue;
            }

            Arrays.sort(a);

            i = 0;
            j = 1;

            while (i < n && j < n) {
                count = 1;

                while (a[j] - a[i] <= k) {
                    i++;
                    j++;
                    count++;
                    if (j == n) {
                        break;
                    }
                }

                if (count > max) {
                    max = count;
                }
                i = j;
                // System.out.println(count);
                j++;
            }

            System.out.println(n - max);
        }
    }
}
