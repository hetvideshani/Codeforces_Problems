import java.util.*;

public class Advantage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), i, max = 0, smax = 0;

            int[] a = new int[n];

            a[0] = sc.nextInt();
            max = a[0];
            smax = a[0];

            for (i = 1; i < n; i++) {
                a[i] = sc.nextInt();

                if (a[i] > max) {
                    smax = max;
                    max = a[i];
                }
                else if (a[i] > smax) {
                    smax = a[i];
                }
            }

            // System.out.println(smax + " " + max);

            for (i = 0; i < n; i++) {
                if (a[i] == max) {
                    System.out.print(a[i] - smax + " ");
                } else {
                    System.out.print(a[i] - max + " ");
                }
            }

            System.out.println();
        }
    }
}