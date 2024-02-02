import java.util.*;

public class PolycarpsPockets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, j, max = 0, c = 0;
        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for (i = 0; i < n; i++) {
            c = 1;
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    c++;
                }
            }
            if (c > max) {
                max = c;
            }
        }

        System.out.println(max);
    }
}