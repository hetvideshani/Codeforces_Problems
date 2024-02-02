import java.util.*;

public class BunLover {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            int n, total = 0, sum = 0;

            n = sc.nextInt();

            total = 4 * n;
            total += n;
            sum = (n - 1) * (n - 2);
            total += sum;
            System.out.println(total + "\n");
        }

    }
}