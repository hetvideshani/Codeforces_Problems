import java.util.*;

public class Rebellion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i, j, c = 0;
            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            i = 0;
            j = 1;
            while (i < n && j < n) {
                if (a[i] == 1 && a[j] == 0) {
                    c++;
                    while (a[j] == 0) {
                        j++;
                        if (j == n) {
                            break;
                        }
                    }
                }
                i = j;
                j++;
            }

            System.out.println(c);
        }
    }
}