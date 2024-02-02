import java.util.*;

public class Haiku {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int i, j, flag = 0;

        for (i = 0; i < 3; i++) {
            String s = sc.nextLine();
            int count = 0;

            for (j = 0; j < s.length(); j++) {
                if (s.charAt(j) == 'a' || s.charAt(j) == 'e' || s.charAt(j) == 'i' || s.charAt(j) == 'o'
                        || s.charAt(j) == 'u') {
                    count++;
                }
            }

            if (i == 0 && count != 5 || i == 1 && count != 7 || i == 2 && count != 5) {
                flag = 1;
            }
        }

        if (flag == 1) {
            System.out.println("NO");
        } else {
            System.out.println("YES");
        }
    }
}