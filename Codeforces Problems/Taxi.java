import java.util.*;

public class Taxi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i, taxi = 0, count = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

        int[] a = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();

            if (a[i] == 1) {
                c1++;
            } else if (a[i] == 2) {
                c2++;
            } else if (a[i] == 3) {
                c3++;
            } else {
                c4++;
            }
        }

        Arrays.sort(a);
        i = 0;
        // while (i < n) {
        // count = 0;
        // while (count + a[i] <= 4) {
        // count += a[i];
        // i++;
        // if (i == n) {
        // break;
        // }
        // }
        // taxi++;
        // // System.out.println(count + " " + taxi);
        // }
        // 1 1 2 2 3 3 4 4

        taxi += c4;

        if (c3 > c1) {
            taxi += c3;
            c1 = 0;
        } else {
            taxi += c3;
            c1 -= c3;
        }

        if (c2 % 2 == 0) {
            taxi += c2 / 2;
        } else {
            taxi += (c2 / 2) + 1;
        }

        if (c1 > 0) {
            if (c2 % 2 != 0) {
                c1 -= 2;
            }

            while (c1 > 0) {
                taxi++;
                c1 -= 4;
            }
        }

        System.out.println(taxi);

    }
}