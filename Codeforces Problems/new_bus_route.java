import java.util.*;

public class new_bus_route {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] a = new int[n];

        int i;

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        Arrays.sort(a);

        int min, count = 0;
        min = a[1] - a[0];

        for (i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] < min) {
                min = a[i + 1] - a[i];
            }
        }

        for (i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] == min) {
                count++;
            }
        }

        System.out.println(min + " " + count);
    }
}

// -2 0 2