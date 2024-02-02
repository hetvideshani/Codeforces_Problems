import java.util.*;

public class FreeCash {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int i, j, k, count = 1, max = 1;
        int n = sc.nextInt();

        int[][] a = new int[n][2];

        for (i = 0; i < n; i++) {
            for (j = 0; j < 2; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        i = 0;
        j = 1;

        // while (i < n && j < n) {
        // while (a[i][0] == a[j][0]) {
        // j++;
        // if (j == n) {
        // break;
        // }
        // }
        // k = i;
        // count = 1;
        // while (k < j && k + 1 < n) {
        // if (a[k][1] == a[k + 1][1]) {
        // count++;
        // }
        // k++;
        // }

        // if (count > max) {
        // max = count;
        // }
        // i = j;
        // j++;
        // }

        while (i < n && j < n) {
            count = 1;
            while (a[i][0] == a[j][0] && a[i][1] == a[j][1]) {
                count++;
                j++;
                if (j == n) {
                    break;
                }
            }

            if (count >= max) {
                max = count;
            }
            i = j;
            j++;
        }

        System.out.println(max);
    }
}