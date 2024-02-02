import java.util.*;

public class OneAndTwo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), i, j, mul1 = 1, mul2 = 1, flag = 0;
            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            for (i = 0; i < n - 1; i++) {
                mul2 = 1;
                mul1 *= a[i];
                for (j = i + 1; j < n; j++) {
                    mul2 *= a[j];
                }
                if (mul1 == mul2) {
                    flag = 1;
                    System.out.println(i + 1);
                    break;
                }
            }
            if (flag == 0) {
                System.out.println(-1);
            }
        }
    }
}