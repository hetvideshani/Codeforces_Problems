import java.util.*;

public class Maximums {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i, j;
        long sum = 0, max = 0;

        long[] a = new long[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        System.out.print(a[0] + " ");
        sum += a[0];

        for (i = 1; i < n - 1; i++) {
            sum += a[i];
            System.out.print(sum + " ");
            if (sum > max) {
                max = sum;
            }
        }

        if (sum == 0) {
            System.out.print(max + 1);
        } else {
            sum += a[i];
            System.out.print(sum);
        }

    }
}
