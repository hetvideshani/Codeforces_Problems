import java.util.*;

public class NearestInterestingNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, m, sum = 0;

        m = n;

        do {
            sum = 0;
            n = m;
            while (n > 0) {
                sum += n % 10;
                n = n / 10;
            }
            m++;
        } while (sum % 4 != 0);

        System.out.println(m - 1);
    }
}