import java.util.*;

public class LinelandMail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, j, min = 0, max = 0, dis, flag = 0;
        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for (i = 0; i < n; i++) {
            if (i == 0) {
                min = Math.abs(a[1] - a[0]);
                max = Math.abs(a[n - 1] - a[0]);
            } else if (i == n - 1) {
                min = Math.abs(a[n - 1] - a[n - 2]);
                max = Math.abs(a[n - 1] - a[0]);
            } else {
                min = Math.min(Math.abs(a[i] - a[i - 1]), Math.abs(a[i] - a[i + 1]));
                max = Math.max(Math.abs(a[i] - a[n - 1]), Math.abs(a[i] - a[0]));
            }
            // flag = 0;
            // for (j = 0; j < n; j++) {
            // dis = Math.abs(a[j] - a[i]);
            // if (flag == 0 && j != i) {
            // max = dis;
            // min = dis;
            // flag = 1;
            // }
            // if (j != i) {
            // if (dis < min) {
            // min = dis;
            // }
            // if (dis > max) {
            // max = dis;
            // }
            // }
            // }
            System.out.println(min + " " + max);
        }
    }
}