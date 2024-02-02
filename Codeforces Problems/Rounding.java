import java.util.*;

public class Rounding {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        if (n % 10 == 0) {
            System.out.println(n);
            return;
        }

        int d;
        d = n % 10;

        if (d <= 5) {
            System.out.println((n / 10) * 10);
        } else {
            System.out.println(((n / 10) + 1) * 10);
        }
    }
}