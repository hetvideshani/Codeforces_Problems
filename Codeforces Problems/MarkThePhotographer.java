import java.util.Arrays;
import java.util.Scanner;

public class MarkThePhotographer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t, i;

        t = sc.nextInt();

        for (i = 0; i < t; i++) {
            int n, k, j, flag = 0;
            n = sc.nextInt();
            k = sc.nextInt();

            int[] a = new int[2 * n];

            for (j = 0; j < 2 * n; j++) {
                a[j] = sc.nextInt(); // 3 5
            } // 1 3 9 10 12 16

            Arrays.sort(a);

            for (j = 0; j < n; j++) {
                if (a[j + n] - a[j] < k) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
