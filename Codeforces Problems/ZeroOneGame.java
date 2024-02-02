import java.util.*;

public class ZeroOneGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();

        while (t-- > 0) {
            String s = sc.nextLine();
            int i = 0, c = 0;

            while (i < s.length() - 1) {
                if (s.charAt(i) != s.charAt(i + 1)) {
                    c++;
                    i += 2;
                } else {
                    i++;
                }
            }

            if (c % 2 != 0) {
                System.out.println("DA");
            } else {
                System.out.println("NET");
            }
        }
    }
}