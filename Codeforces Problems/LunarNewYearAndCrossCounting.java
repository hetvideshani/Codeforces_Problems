import java.util.*;

public class LunarNewYearAndCrossCounting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, j, c = 0;

        sc.nextLine();

        String[] s = new String[n];

        for (i = 0; i < n; i++) {
            s[i] = sc.nextLine();
        }

        if (n < 3) {
            System.out.println(c);
            return;
        }

        for (i = 1; i < n - 1; i++) {
            for (j = 1; j < n - 1; j++) {
                if (s[i].charAt(j) == 'X' && s[i - 1].charAt(j - 1) == 'X' && s[i - 1].charAt(j + 1) == 'X'
                        && s[i + 1].charAt(j - 1) == 'X' && s[i + 1].charAt(j + 1) == 'X') {
                    c++;
                }
            }
        }

        System.out.println(c);
    }
}