import java.util.*;

public class TwoVessels {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int a, b, c, max, min, count = 0;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            if (a == b) {
                System.out.println("0");
                continue;
            }

            max = Math.max(a, b);
            min = Math.min(a, b);

            while (min < max) {
                min += c;
                max -= c;
                count++;
            }

            System.out.println(count);
        }
    }
}