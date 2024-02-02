import java.util.*;

public class DiplomasAndCertificates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n, k, i;

        n = sc.nextLong();
        k = sc.nextLong();

        if (k > n) {
            System.out.println("0 0 " + n);
        } else {
            long half = n / 2, dip, cer;

            dip = half / (k + 1);
            cer = dip * k;

            n -= dip + cer;
            System.out.println(dip + " " + cer + " " + n);
        }
    }
}