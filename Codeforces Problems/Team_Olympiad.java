import java.util.*;

public class Team_Olympiad {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n];

        int i, j, k, c1 = 0, c2 = 0, c3 = 0, d, min;

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (a[i] == 1) {
                c1++;
            } else if (a[i] == 2) {
                c2++;
            } else {
                c3++;
            }
        }

        d = Math.min(c1, c2);
        min = Math.min(d, c3);

        if (min == 0) {
            System.out.println(0);
            return;
        }

        System.out.println(min);

        i = 0;
        j = 0;
        k = 0;
        while (d > 0 && i < n && j < n && k < n) {

            while (a[i] != 1) {
                i++;
                if (i == n) {
                    break;
                }
            }
            while (a[j] != 2) {
                j++;
                if (j == n) {
                    break;
                }
            }
            while (a[k] != 3) {
                k++;
                if (k == n) {
                    break;
                }
            }

            System.out.println((i + 1) + " " + (j + 1) + " " + (k + 1));
            i++;
            j++;
            k++;

            d--;
        }
    }
}