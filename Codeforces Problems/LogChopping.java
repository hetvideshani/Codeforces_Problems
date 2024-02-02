import java.util.*;

public class LogChopping {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i, count = 0;

            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();

                count += a[i] / 2;
            }

            if (n == 1 && a[0] == 1) {
                System.out.println("maomao90");
            }

            else if (count % 2 == 0) {
                System.out.println("errorgorn");
            } else {
                System.out.println("maomao90");
            }
        }
    }
}