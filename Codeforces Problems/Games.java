import java.util.*;

public class Games {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[][] a = new int[n][2];
        int i, j, count = 0;

        for (i = 0; i < n; i++) {
            for (j = 0; j < 2; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i != j) {
                    if (a[i][1] == a[j][0]) {
                        count++;
                    }
                }
            }
        }

        System.out.println(count);

    }
}