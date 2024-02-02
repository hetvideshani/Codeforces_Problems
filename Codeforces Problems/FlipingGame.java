import java.util.*;

public class FlipingGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i, c1 = 0, c0 = 0, count = 0, max = 0;
        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (a[i] == 1) {
                c1++;
            } else {
                c0++;
            }
        }

        if (c1 == 0) {
            System.out.println("1");
            return;
        }
        if (c0 == 0) {
            System.out.println("0");
            return;
        }

        i = 0;
        while (i < n) {
            count = 0;
            while (count >= 0) {
                if (a[i] == 0) {
                    count++;
                } else {
                    count--;
                }
                i++;
                if (i == n) {
                    break;
                }
            }
            if (count > max) {
                max = count;
            }
            if (count == 0) {
                i++;
            }
        }

        System.out.println();
    }
}
