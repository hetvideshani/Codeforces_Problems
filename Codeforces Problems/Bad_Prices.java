import java.util.*;

public class Bad_Prices {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i, j, min, flag = 0, index = 0, total = 0, last = 0, fs = 0;
            int[] a = new int[n];
            int[] b = new int[n];

            a[0] = sc.nextInt();
            min = a[0];

            for (i = 1; i < n; i++) {
                a[i] = sc.nextInt();
                b[i] = a[i];
                // if (a[i] < min) {o
                // min = a[i];
                // index = i;
                // }
            }

            Arrays.sort(b);

            for (i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    fs = 1;
                    break;
                }
            }

            if (fs == 0) {
                System.out.println("0");
                continue;
            }
            // total = index;

            for (i = 0; i < n; i++) {
                flag = 0;
                if (i != 0) {
                    if (a[i] > last && i < index) {
                        flag = 1;
                        total++;
                    }
                }

                if (flag == 0) {
                    for (j = i + 1; j < n; j++) {
                        if (a[j] < a[i]) {
                            last = a[i];
                            index = j;
                            total++;
                            break;
                        }
                    }
                }
            }

            // for (i = index + 1; i < n - 1; i++) {
            // for (j = i + 1; j < n; j++) {
            // if (a[j] < a[i]) {
            // total++;
            // break;
            // }
            // }
            // }

            System.out.println(total);
        }
    }
}
