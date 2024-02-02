import java.util.*;

public class Badge {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i;

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        System.out.print(a[0] + " ");

        for (i = 1; i < n; i++) {
            System.out.print(a[a[i] - 1] + " ");
        }
    }
}