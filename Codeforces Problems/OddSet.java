import java.util.*;

public class OddSet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            int j, n, counto = 0, counte = 0;
            n = sc.nextInt();

            for (j = 0; j < 2 * n; j++) {
                int x = sc.nextInt();

                if (x % 2 == 0) {
                    counte++;
                } else {
                    counto++;
                }
            }

            if (counto == counte) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
