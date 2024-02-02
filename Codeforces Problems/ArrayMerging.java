import java.util.*;

public class ArrayMerging {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i, j, cmax = 0, count = 0;

            int[] a = new int[n];
            int[] b = new int[n];
            int[] c = new int[2 * n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                c[i] = a[i];
            }

            for (i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }

            i = 0;
            while (i < 2 * n) {

            }

            // System.out.println(cmax);
        }
    }
}
