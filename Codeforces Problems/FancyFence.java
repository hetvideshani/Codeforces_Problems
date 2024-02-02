import java.util.*;

public class FancyFence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n, i, j;
            double ans = 0;
            n = sc.nextInt();

            i = 1;

            while (ans < n) {
                ans = (180.0 * i) / (i + 2);
                i++;

                if ((double) n == ans) {
                    System.out.println("YES");
                    break;
                }
            }

            if (n != ans) {
                System.out.println("NO");
            }
        }
    }
}
