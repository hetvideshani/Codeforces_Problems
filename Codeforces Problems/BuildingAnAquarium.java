import java.util.*;

public class BuildingAnAquarium {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), i, j, c = 1, temp = 0, flag = 0, sum = 0;
            int x = sc.nextInt();
            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            Arrays.sort(a);

            while (temp < x) {
                temp = 0;
                i = 0;

                while (a[i] < c) {
                    temp += c - a[i];
                    i++;
                    if (i == n) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1) {
                    break;
                }

                // System.out.println(temp + " " + c);
                c++;
            }

            if (temp == x) {
                System.out.println(c - 1);
                continue;
            }

            if (flag == 1) {
                x -= temp;
                if (x % n == 0) {
                    System.out.println(c + (x / n));
                } else {
                    System.out.println(c + (x / n) - 1);
                }
            } else {
                System.out.println(c - 2);
            }
        }

        sc.close();
    }
}
// BuildingAnAquarium
