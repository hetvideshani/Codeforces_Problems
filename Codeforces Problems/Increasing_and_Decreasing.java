import java.util.*;

public class Increasing_and_Decreasing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int x, y, n, i, j;

            x = sc.nextInt();
            y = sc.nextInt();
            n = sc.nextInt();

            int[] a = new int[n];
            a[n - 1] = y;

            for (i = n - 2, j = 1; i >= 0; i--, j++) {
                a[i] = a[i + 1] - j;
            }

            if (a[0] >= x) {
                a[0] = x;

                for (i = 0; i < n; i++) {
                    System.out.print(a[i] + " ");
                }
            } else {
                System.out.print("-1");
            }
            System.out.println();
        }
    }
}
