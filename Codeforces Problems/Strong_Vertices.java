import java.util.*;

public class Strong_Vertices {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int i, j, flag = 0, count = 0;

            int[] a = new int[n];
            int[] b = new int[n];
            int[] narr = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            for (i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }

            for (i = 0; i < n; i++) {
                flag = 0;
                for (j = 0; j < n; j++) {
                    if (i != j) {
                        if (a[i] - a[j] < b[i] - b[j]) {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag == 0) {
                    narr[count] = a[i];
                    count++;
                }
            }

            System.out.println(count);

            for (i = 0; i < count; i++) {
                System.out.print(narr[i] + " ");
            }
            System.out.println();
        }
    }
}
