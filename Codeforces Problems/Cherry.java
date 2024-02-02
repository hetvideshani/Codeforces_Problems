import java.util.*;

public class Cherry {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int i, j, count = 0;
            long[] a = new long[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            Arrays.sort(a);

            if (n == 2 && a[0] == a[1]) {
                System.out.println(a[0] * a[0]);
                continue;
            }

            i = n - 1;
            while (i > 0) {
                if (a[i - 1] != a[i]) {
                    System.out.println(a[i - 1] * a[i]);
                    break;
                }
                i--;
            }
        }
    }
}
