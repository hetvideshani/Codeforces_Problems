import java.util.*;

public class CrazyComputer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, k, i, c = 0;

        n = sc.nextInt();
        k = sc.nextInt();

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for (i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > k) {
                c = 0;
            } else {
                c++;
            }
        }

        System.out.println(c + 1);
    }
}