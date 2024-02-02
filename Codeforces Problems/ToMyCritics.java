import java.util.*;

public class ToMyCritics {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        while (n-- > 0) {
            int[] a = new int[3];
            int i, j, sum = 0;

            for (i = 0; i < 3; i++) {
                a[i] = sc.nextInt();
            }

            if (a[0] + a[1] >= 10) {
                System.out.println("YES");
            } else if (a[1] + a[2] >= 10) {
                System.out.println("YES");
            } else if (a[0] + a[2] >= 10) {
                System.out.println("YES");
            }

            else {
                System.out.println("NO");
            }
        }
    }
}
