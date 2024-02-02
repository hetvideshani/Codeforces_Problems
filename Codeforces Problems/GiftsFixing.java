import java.util.*;

public class GiftsFixing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i, j;

            long mina = 0, minb = 0, diff = 0, total = 0, max = 0;
            long[] a = new long[n];
            long[] b = new long[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();

                if (i == 0) {
                    mina = a[0];
                }

                if (a[i] < mina) {
                    mina = a[i];
                }
            }

            for (i = 0; i < n; i++) {
                b[i] = sc.nextInt();

                if (i == 0) {
                    minb = b[0];
                }

                if (b[i] < minb) {
                    minb = b[i];
                }
            }

            for (i = 0; i < n; i++) {
                if (a[i] > mina && b[i] > minb) {
                    max = Math.max(a[i] - mina, b[i] - minb);
                    diff = Math.min(a[i] - mina, b[i] - minb);
                    a[i] -= diff;
                    b[i] -= diff;
                    total += max;
                } else if (a[i] > mina) {
                    total += a[i] - mina;
                } else if (b[i] > minb) {
                    total += b[i] - minb; // 4+3
                }
            }

            System.out.println(total);
        }
    }
}