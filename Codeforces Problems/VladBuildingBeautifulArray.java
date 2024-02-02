import java.util.*;

public class VladBuildingBeautifulArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i, j, ce = 0, co = 0, maxe = 0, maxo = 0;

            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();

                if (a[i] % 2 == 0) {
                    ce++;
                    if (maxe == 0) {
                        maxe = a[i];
                    } else if (a[i] < maxe) {
                        maxe = a[i];
                    }
                } else {
                    co++;
                    if (maxo == 0) {
                        maxo = a[i];
                    } else if (a[i] < maxo) {
                        maxo = a[i];
                    }
                }
            }

            if (ce == 0 || co == 0) {
                System.out.println("YES");
            } else {
                if (maxe < maxo) {
                    System.out.println("NO");
                } else {
                    System.out.println("YES");
                }
            }
        }
    }
}