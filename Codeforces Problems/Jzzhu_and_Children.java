import java.util.*;

public class Jzzhu_and_Children {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m, i, max = 0, index = 0, flag = 0;

        n = sc.nextInt();
        m = sc.nextInt();

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (a[i] <= m) {
                a[i] = 0;
            }
            if (a[i] > m) {
                index = i + 1;
                a[i] -= m;
                flag = 1;
            }
        }

        if (flag == 0) {
            System.out.println(n);
            return;
        }

        while (flag == 1) {
            flag = 0;

            for (i = 0; i < n; i++) {
                if (a[i] > m) {
                    index = i + 1;
                    a[i] -= m;
                    flag = 1;
                } else {
                    a[i] = 0;
                }
            }
        }

        System.out.println(index);

    }
}