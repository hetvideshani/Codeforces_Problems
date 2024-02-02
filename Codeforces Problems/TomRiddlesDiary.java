import java.util.*;

public class TomRiddlesDiary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, j, flag;
        String[] s = new String[n];

        sc.nextLine();

        for (i = 0; i < n; i++) {
            s[i] = sc.nextLine();
        }

        System.out.println("NO");

        for (i = 1; i < n; i++) {
            flag = 0;
            for (j = 0; j < i; j++) {
                if (s[i].equals(s[j])) {
                    flag = 1;
                    System.out.println("YES");
                    break;
                }
            }
            if (flag == 0) {
                System.out.println("NO");
            }
        }
    }
}