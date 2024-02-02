import java.util.*;

public class TheRank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] sum = new int[n];
        int i, j, index = 0, t = 0;
        for (i = 0; i < n; i++) {
            int[] a = new int[4];

            for (j = 0; j < 4; j++) {
                a[j] = sc.nextInt();
                sum[i] += a[j];
            }
            if (i == 0) {
                t = sum[0];
            }
        }

        // for (i = 0; i < n; i++) {
        // System.out.print(sum[i] + " ");
        // }
        Arrays.sort(sum);

        // System.out.println();
        // for (i = 0; i < n; i++) {
        // System.out.print(sum[i] + " ");
        // }

        for (i = n - 1; i >= 0; i--) {
            if (sum[i] == t) {
                index = i;
                break;
            }
        }

        System.out.println(n - index);
    }
}