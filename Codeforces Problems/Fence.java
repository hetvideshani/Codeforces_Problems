import java.util.*;

public class Fence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, k, i, j, sum = 0, c, min, index, flag = 0;
        n = sc.nextInt();
        k = sc.nextInt();

        int[] a = new int[n];

        a[0] = sc.nextInt();
        for (i = 1; i < n; i++) {
            a[i] = sc.nextInt();
            if (a[i] != a[0]) {
                flag = 1;
            }
        }

        if (flag == 0) {
            System.out.println(1);
            return;
        }

        for (i = 0; i < k && i < n; i++) {
            sum += a[i];
        }

        min = sum;
        index = 0;
        j = k;

        for (i = 1; i <= n - k; i++, j++) {
            sum -= a[i - 1];
            sum += a[j];

            if (sum < min) {
                min = sum;
                index = i;
            }
        }

        System.out.println(index + 1);
    }
}
