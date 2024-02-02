import java.util.*;

public class footbal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, i, count = 0, j;
        n = sc.nextInt();

        String[] s = new String[n + 1];

        for (i = 0; i <= n; i++) {
            s[i] = sc.nextLine();
        }

        for (i = 0; i <= n; i++) {
            System.out.println(s[i]);
        }

    }
}
