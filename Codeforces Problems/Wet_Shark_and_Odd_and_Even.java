import java.util.*;

public class Wet_Shark_and_Odd_and_Even {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        long[] a = new long[n];
        int i;
        long co = 0, min = 0, sum = 0, flag = 0;

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (a[i] % 2 != 0 && flag == 0) {
                flag = 1;
                min = a[i];
            }

            if (a[i] % 2 != 0) {
                co++;
                if (a[i] < min) {
                    min = a[i];
                }
            }

            sum += a[i];
        }

        if (co % 2 == 0) {
            System.out.println(sum);
        } else {
            System.out.println(sum - min);
        }
    }
}
