import java.util.*;

public class AmbitiousKid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, flag = 0, min = 0, max = 0, flagp = 0, flagn = 0;
        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            if (a[i] == 0) {
                flag = 1;
            }
            if (i == 0) {
                min = a[i];
                max = a[i];
            }

            if (flagp == 0 && a[i] > 0) {
                flagp = 1;
                max = a[i];
            } else if (flagn == 0 && a[i] < 0) {
                flagn = 1;
                min = a[i];
            }

            if (a[i] < max && a[i] > 0 && flagp == 1) {
                max = a[i];
            } else if (a[i] > min && a[i] < 0 && flagn == 1) {
                min = a[i];
            }
        }

        if (flag == 1) {
            System.out.println(0);
        } else {
            System.out.println(Math.min(Math.abs(max), Math.abs(min)));
        }

    }
}