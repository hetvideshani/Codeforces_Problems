import java.util.*;

public class PhoneCode {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, j, flag = 0;

        String[] s = new String[n];

        sc.nextLine();

        for (i = 0; i < n; i++) {
            s[i] = sc.nextLine();
        }

        i = 0;

        while (i < s[0].length()) {
            j = 0;
            while (j < n - 1) {
                if (s[j].charAt(i) != s[j + 1].charAt(i)) {
                    flag = 1;
                    break;
                }
                j++;
            }
            if (flag == 1) {
                break;
            }
            i++;
        }

        System.out.println(i);
    }
}