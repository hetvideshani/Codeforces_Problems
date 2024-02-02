import java.util.*;

public class JohnyLikesNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, k, digit;

        n = sc.nextInt();
        k = sc.nextInt();

        if (n >= k) {
            digit = n / k;

            System.out.println((digit + 1) * k);
        } else {
            System.out.println(k);
        }
    }
}