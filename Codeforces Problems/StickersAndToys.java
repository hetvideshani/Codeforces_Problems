import java.util.*;

public class StickersAndToys {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int k = sc.nextInt();
        while (k-- > 0) {
            int n, s, t;

            n = sc.nextInt();
            s = sc.nextInt();
            t = sc.nextInt();

            if (s >= n && t >= n) {
                System.out.println(1);
            } else if (s + t > n) {
                System.out.println(Math.min(s, t) + 1);
            } else {
                System.out.println();
            }
        }
    }
}
