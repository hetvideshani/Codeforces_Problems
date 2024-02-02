import java.util.*;

public class DaltonTheTeacher {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), i, count = 0;

            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();

                if (a[i] == i + 1) {
                    count++;
                }
            }

            if (count == 0) {
                System.out.println(count);
            } else if (count % 2 != 0) {
                System.out.println((count / 2) + 1);
            } else {
                System.out.println(count / 2);
            }
        }
    }
}