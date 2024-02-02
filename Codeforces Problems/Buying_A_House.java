import java.util.*;

public class Buying_A_House {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m, k, i, min;
        n = sc.nextInt();
        m = sc.nextInt();
        k = sc.nextInt();

        min = n;

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (a[i] <= k && a[i] != 0) {
                if (i + 1 < m) {
                    if (m - (i + 1) < min) {
                        min = m - (i + 1);
                    }
                } else if (i + 1 > m) {
                    if (i + 1 - m < min) {
                        min = i + 1 - m;
                    }
                }
            }

            // System.out.println(min);
        }

        System.out.println(min * 10);
    }
}