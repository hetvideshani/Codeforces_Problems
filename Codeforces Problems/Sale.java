import java.util.*;

public class Sale {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m, i, cm = 0, sum = 0;
        n = sc.nextInt();
        m = sc.nextInt();

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        Arrays.sort(a);

        for (i = 0; i < m && a[i] < 0; i++) {
            sum += a[i];
        }

        System.out.println(sum * -1);
    }
}