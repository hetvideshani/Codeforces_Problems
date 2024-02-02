import java.util.*;

public class Yet_Another_Two_Integers_Problem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t;

        t = sc.nextInt();

        Yet_Another_Two_Integers_Problem y = new Yet_Another_Two_Integers_Problem();

        while (t-- > 0) {
            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();

            if (a > b) {
                System.out.println(y.count(b, a));
            } else {
                System.out.println(y.count(a, b));
            }
        }

    }

    public int count(int a, int b) {
        if (a == b) {
            return 0;
        } else {
            double c = 0;

            c = (b - a) / 10.0;
            // return c;
            return (int) Math.ceil(c);
        }
    }
}