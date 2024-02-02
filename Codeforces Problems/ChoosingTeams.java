import java.util.*;

public class ChoosingTeams {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, i, k, c = 0;
        n = sc.nextInt();
        k = sc.nextInt();

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        Arrays.sort(a);

        i = 0;
        while (i < n && a[i] < 5) {
            if (i + 2 >= n) {
                break;
            }

            if (a[i] + k < 6 && a[i + 1] + k < 6 && a[i + 2] + k < 6) {
                c++;
            }
            i += 3;
        }

        System.out.println(c);
    }
}