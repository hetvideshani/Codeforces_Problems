import java.util.*;

public class HonestCoach {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int i, j, min;
            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            Arrays.sort(a);

            min = a[1] - a[0];

            for (i = 1; i < n - 1; i++) {
                if (a[i + 1] - a[i] < min) {
                    min = a[i + 1] - a[i];
                }
            }

            System.out.println(min);
        }
    }
}
