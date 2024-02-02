import java.util.*;

public class PleasentPairs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int i, j, count = 0;
            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            for (i = 0; i < n - 1; i++) {
                for (j = i + 1; j < n; j++) {
                    if (a[i] * a[j] == i + j + 2) {
                        count++;
                    }
                }
            }

            System.out.println(count);
        }
    }
}
