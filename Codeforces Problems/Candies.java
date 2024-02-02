import java.util.*;

public class Candies {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i = 3, j = 1;

            while (n % i != 0) {
                j++;
                i += Math.pow(2, j);
            }

            System.out.println(n / i);
        }
    }
}