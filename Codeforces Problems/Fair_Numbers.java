import java.util.*;

public class Fair_Numbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            String s = sc.nextLine();
            long n = sc.nextInt();

            long m, digit;
            int flag = 0, i = 0;

            m = n;

            // while (n > 0) {
            // digit = (int) n % 10;
            // if (digit != 0) {
            // if (m % digit != 0) {
            // flag = 1;
            // break;
            // }
            // }
            // n = n / 10;
            // }

            // while (flag == 1) {
            // flag = 0;
            // m++;
            // n = m;
            // while (n > 0) {
            // digit = (int) n % 10;
            // if (digit != 0) {
            // if (m % digit != 0) {
            // flag = 1;
            // break;
            // }
            // }
            // n = n / 10;
            // }
            // }

            System.out.println(m);
        }
    }
}
