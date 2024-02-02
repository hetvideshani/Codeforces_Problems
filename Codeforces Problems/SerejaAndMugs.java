import java.util.*;

public class SerejaAndMugs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, s, i, sum = 0;
        n = sc.nextInt();
        s = sc.nextInt();

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            sum += a[i];
        }

        for (i = 0; i < n; i++) {
            if (sum - a[i] <= s) {
                System.out.println("YES");
                return;
            }
        }

        System.out.println("NO");
    }
}