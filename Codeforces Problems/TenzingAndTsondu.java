import java.util.*;

public class TenzingAndTsondu {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int i, t;
        t = sc.nextInt();

        for (i = 0; i < t; i++) {
            int n, m, j;
            long suma = 0, sumb = 0;
            n = sc.nextInt();
            m = sc.nextInt();

            int[] a = new int[n];
            int[] b = new int[m];

            for (j = 0; j < n; j++) {
                a[j] = sc.nextInt();
                suma += a[j];
            }

            for (j = 0; j < m; j++) {
                b[j] = sc.nextInt();
                sumb += b[j];
            }

            if (suma > sumb) {
                System.out.println("Tsondu");
            } else if (suma < sumb) {
                System.out.println("Tenzing");
            } else {
                System.out.println("Draw");
            }

        }
    }
}
