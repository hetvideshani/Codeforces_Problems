import java.util.*;

public class BookReading {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, t, i, index = 0, c = 0, flag = 0;

        n = sc.nextInt();
        t = sc.nextInt();

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            c += 86400 - a[i];
            if (c >= t && flag == 0) {
                index = i;
                flag = 1;
            }
        }

        System.out.println(index + 1);
    }
}