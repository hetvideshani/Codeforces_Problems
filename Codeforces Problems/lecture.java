import java.util.*;

public class lecture {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m, i, j, k, flag = 0;
        n = sc.nextInt();
        m = sc.nextInt();

        String[][] s = new String[m][2];

        for (i = 0; i < m; i++) {
            for (j = 0; j < 2; j++) {
                s[i][j] = sc.next();
            }
        }

        String[] p = new String[n];

        for (i = 0; i < n; i++) {
            p[i] = sc.next();
        }

        for (i = 0; i < n; i++) {
            flag = 0;
            for (j = 0; j < m; j++) {
                for (k = 0; k < 2; k++) {
                    if (p[i].compareTo(s[j][k]) == 0) {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 1) {
                    break;
                }
            }

            if (s[j][0].length() > s[j][1].length()) {
                System.out.print(s[j][1] + " ");
            } else {
                System.out.print(s[j][0] + " ");
            }
        }

    }
}