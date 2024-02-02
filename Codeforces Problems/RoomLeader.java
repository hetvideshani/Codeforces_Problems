import java.util.ArrayList;
import java.util.Scanner;

public class RoomLeader {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, i, max = 0, index = 0;
        n = sc.nextInt();

        String[][] a = new String[n][2];

        for (i = 0; i < n; i++) {
            int j, sum = 0;
            String[] s = new String[8];

            for (j = 0; j < 8; j++) {
                s[j] = sc.next();
            }

            sum = Integer.parseInt(s[3]) + Integer.parseInt(s[4]) +
                    Integer.parseInt(s[5])
                    + Integer.parseInt(s[6]) + Integer.parseInt(s[7]);

            sum = sum + (Integer.parseInt(s[1]) * 100);
            sum = sum - (Integer.parseInt(s[2]) * 50);

            a[i][0] = s[0];
            a[i][1] = Integer.toString(sum);
        }

        max = Integer.parseInt(a[0][1]);

        for (i = 0; i < n; i++) {
            if (Integer.parseInt(a[i][1]) > max) {
                max = Integer.parseInt(a[i][1]);
                index = i;
            }
        }

        System.out.print(a[index][0]);
    }
}