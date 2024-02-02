import java.util.*;

public class triple {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            int j, flag = 0;
            int n = sc.nextInt();

            int[] a = new int[n];

            for (j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }

            if (n < 3) {
                System.out.println("-1");
                continue;
            }

            Arrays.sort(a);

            for (j = 0; j < n - 2; j++) {
                if (a[j] == a[j + 1] && a[j + 1] == a[j + 2]) {
                    System.out.println(a[j]);
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                System.out.println(-1);
            }
        }
    }
}