import java.util.*;

public class Juicer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, b, d;
        int sum = 0;
        n = sc.nextInt();
        b = sc.nextInt();
        d = sc.nextInt();

        int[] a = new int[n];

        for (int j = 0; j < n; j++) {
            a[j] = sc.nextInt();
            if (a[j] <= b) {
                sum += a[j];
            }
        }

        if (sum % d == 0 && sum >= d) {
            System.out.println((sum / d) - 1);
        } else {
            System.out.println(sum / d);
        }
    }
}