import java.util.*;

public class Game {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i;
        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        Arrays.sort(a);

        if (n % 2 == 0) {
            System.out.println(a[(n / 2) - 1]);
        } else {
            System.out.println(a[n / 2]);
        }
    }
}
