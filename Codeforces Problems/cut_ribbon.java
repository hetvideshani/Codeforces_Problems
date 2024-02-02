import java.util.*;

public class cut_ribbon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, count = 0, count1 = 0;
        int[] a = new int[3];

        for (i = 0; i < 3; i++) {
            a[i] = sc.nextInt();
        }

        Arrays.sort(a);

        for (i = 0; i < 3; i++) {

            if (n / a[i] > sum1) {
                sum1 = n / a[i];
            }
        }

        sum2 = n / (a[0] + a[1]);

        if (n / (a[1] + a[2]) > sum2) {
            sum2 = n / (a[1] + a[2]);
        }

        if (n / (a[0] + a[2]) > sum2) {
            sum2 = n / (a[0] + a[2]);
        }

        while (sum < n) {
            i = 0;
            while (sum < n && i < 3) {
                sum += a[i];
                i++;
                sum3++;
            }
        }

        int d = Math.max(sum1, sum2);

        System.out.println(Math.max(sum3, d));
    }
}