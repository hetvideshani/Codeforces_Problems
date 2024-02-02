import java.util.*;

public class sasha_and_array_coloring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int i, t = sc.nextInt();

        for (i = 0; i < t; i++) {
            int n, j, k, sum = 0;
            n = sc.nextInt();

            int[] a = new int[n];

            for (j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }

            Arrays.sort(a);

            j = 0;
            k = n - 1;
            while (j < n / 2) {
                sum += a[k] - a[j];
                j++;
                k--;
            }

            System.out.println(sum);
        }
    }
}