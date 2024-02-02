import java.util.*;

import javax.lang.model.util.ElementScanner14;

public class MaximumProduct {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int i, t = sc.nextInt();

        for (i = 0; i < t; i++) {
            int n, j, k, mul = 1, c = 0, cn = 0, cp = 0, cz = 0;
            n = sc.nextInt();

            int[] a = new int[n];

            for (j = 0; j < n; j++) {
                a[j] = sc.nextInt();

                if (a[j] < 0) {
                    cn++;
                } else if (a[j] == 0) {
                    cz++;
                } else {
                    cp++;
                }
            }

            Arrays.sort(a);

            j = 0;
            k = n - 1;

            while (c < 5) {

                if (a[j] == 0) {
                    j++;
                } else if (a[k] == 0) {
                    k--;
                }

                else if (a[j] < 0 && a[j] * -1 > a[k]) {
                    mul *= a[j] * (-1);
                    j++;
                }

                else if (a[j] >= a[k]) {
                    mul *= a[j];
                    j++;
                }
                c++;
            }

        }
    }
}
