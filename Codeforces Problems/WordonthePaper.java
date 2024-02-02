import java.util.*;

public class WordonthePaper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        String temp = sc.nextLine();

        while (t-- > 0) {
            String[] s = new String[8];
            int i = 0, j = 0, flag = 0, index = 0;

            for (i = 0; i < 8; i++) {
                s[i] = sc.nextLine();
            }

            for (i = 0; i < 8; i++) {
                for (j = 0; j < 8; j++) {
                    if (s[i].charAt(j) != '.') {
                        index = j;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1) {
                    break;
                }
            }

            while (s[i].charAt(j) != '.') {
                System.out.print(s[i].charAt(j));
                i++;
                if (i == 8) {
                    break;
                }
            }

            System.out.println();
        }
    }
}
