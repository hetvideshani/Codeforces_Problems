import java.util.*;

public class MemoryAndCrow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i;

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (i > 0) {
                System.out.print((a[i] + a[i - 1]) + " ");
            }
        }

        System.out.print(a[n - 1]);
    }
}