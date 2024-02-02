import java.util.*;

public class GregsWorkout {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, c1 = 0, c2 = 0, c3 = 0;
        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (i % 3 == 1) {
                c2 += a[i];
            } else if (i % 3 == 2) {
                c3 += a[i];
            } else {
                c1 += a[i];
            }
        }

        int max = Math.max(c1, Math.max(c2, c3));

        if (max == c1) {
            System.out.println("chest");
        } else if (max == c2) {
            System.out.println("biceps");
        } else {
            System.out.println("back");
        }
    }
}