import java.util.*;

public class T_primes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        long i, j;

        while (t-- > 0) {
            long n = sc.nextInt();
            int count = 0;

            for (i = 1; i <= n / 2; i++) {
                if (n % i == 0) {
                    count++;
                }
            }

            if (count + 1 == 3) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}