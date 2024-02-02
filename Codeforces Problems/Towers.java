import java.util.*;

public class Towers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i, j, count = 1, max = 0, total = 0, flag = 0;

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for (i = 0; i < n; i++) {
            count = 1;
            flag = 0;
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    flag = 1;
                    count++;
                }
            }
            if (flag == 0) {
                total++;
            }
            if (count > max) {
                max = count;
            }
        }

        System.out.println(max + " " + total);
    }
}