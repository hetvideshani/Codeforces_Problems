import java.util.*;

public class Assembly_via_Minimums {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int rem, i;
            rem = n * (n - 1) / 2;

            long[] a = new long[rem];

            for (i = 0; i < rem; i++) {
                a[i] = sc.nextInt();
            }

            Arrays.sort(a);

            for (i = 0; i < rem; i += n) {
                System.out.print(a[i] + " ");
                n--;
            }
            System.out.print(a[rem - 1]);
            System.out.println();
        }
    }
}
