import java.util.*;

public class laptops {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, i, j, t1, t2, flag = 0, index = 0;
        n = sc.nextInt();
        int[][] a = new int[n][2];

        for (i = 0; i < n; i++) {
            a[i][0] = sc.nextInt();
            a[i][1] = sc.nextInt();

            if (a[i][0] != a[i][1] && flag == 0) {
                flag = 1;
                index = i;
            }
        }

        if (flag == 0) {
            System.out.println("Poor Alex");
            return;
        }

        // 1 1
        // 2 2
        // 3 3
        // 4 4
        // 5 5
        // 6 4

        for (i = index; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (a[i][0] > a[j][0]) {
                    if (a[i][1] < a[j][1]) {
                        System.out.println("Happy Alex");
                        return;
                    }
                } else if (a[i][0] < a[j][0]) {
                    if (a[i][1] > a[j][1]) {
                        System.out.println("Happy Alex");
                        return;
                    }
                }
            }
        }

        // System.out.println();

        // for (i = 0; i < n; i++) {
        // System.out.println(a[i][0] + " " + a[i][1]);
        // }

        // for (i = 0; i < n; i++) {
        // for (j = i + 1; j < n; j++) {
        // if (a[i][1] > a[j][1]) {
        // System.out.println("Happy Alex");
        // return;
        // }
        // }
        // }

        System.out.println("Poor Alex");
    }
}
