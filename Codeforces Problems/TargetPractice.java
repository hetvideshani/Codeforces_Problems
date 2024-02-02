import java.util.*;

public class TargetPractice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();

        while (t-- > 0) {
            String[] s = new String[10];
            int i = 0, j = 0, sum = 0;

            for (i = 0; i < 10; i++) {
                s[i] = sc.nextLine();
            }

            for (i = 0; i < 10; i++) {
                for (j = 0; j < 10; j++) {
                    if (s[i].charAt(j) == 'X') {
                        if (i == 0 || i == 9 || j == 0 || j == 9) {
                            sum += 1;
                        } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                            sum += 2;
                        } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                            sum += 3;
                        } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                            sum += 4;
                        } else {
                            sum += 5;
                        }
                    }
                }
            }

            System.out.println(sum);

            // for (i = 0; i < 10; i++) {
            // System.out.println(s[i]);
            // }
        }
        sc.close();
    }
}