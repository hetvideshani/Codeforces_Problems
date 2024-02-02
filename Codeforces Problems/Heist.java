import java.util.*;

public class Heist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, min, max;
        int[] a = new int[n];

        a[0] = sc.nextInt();
        min = a[0];
        max = a[0];

        for (i = 1; i < n; i++) {
            a[i] = sc.nextInt();

            if (a[i] > max) {
                max = a[i];
            } else if (a[i] < min) {
                min = a[i];
            }
        }

        System.out.println(max - min + 1 - n);
    }
}