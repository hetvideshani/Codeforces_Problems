import java.util.*;

public class MarkTheDustSweeper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, i;
        t = sc.nextInt();

        for (i = 0; i < t; i++) {
            int j = 0, k = 0, flag = 0;
            String a, b, c;

            a = sc.next();
            b = sc.next();
            c = "";

            while (b.charAt(k) != '\0' && j < a.length()) {
                if (a.charAt(j) == b.charAt(k)) {
                    c += a.charAt(j);
                    k++;
                }
                j++;
            }
            // c.charAt(k) = '\0';

            while (a.charAt(j) != '\0') {
                for (k = 0; k < b.length(); k++) {
                    if (a.charAt(j) == b.charAt(k)) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1) {
                    break;
                }
                j++;
            }

            if (b.compareTo(c) == 0 && flag == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

}