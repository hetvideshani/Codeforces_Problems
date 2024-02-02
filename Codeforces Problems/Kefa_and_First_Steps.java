import java.util.*;

public class Kefa_and_First_Steps {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i, j, count = 0, max = 0;

        long[] a = new long[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        if (n == 1) {
            System.out.println("1");
            return;
        }

        i = 0;
        j = 1;
        while (j < n && i < n) {
            count = 1;
            while (a[i] <= a[j]) {
                i++;
                j++;
                count++;
                if (j == n) {
                    break;
                }
            }
            if (count > max) {
                max = count;
            }
            i++;
            j++;
        }

        System.out.println(max);
    }
}