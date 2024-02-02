import java.util.*;

public class TextVolume {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, c = 0, max = 0;
        sc.nextLine();
        String s = sc.nextLine();

        for (i = 0; i < n; i++) {
            if (s.charAt(i) == 32) {
                c = 0;
            } else if (s.charAt(i) >= 65 && s.charAt(i) <= 90) {
                c++;
            }

            if (c > max) {
                max = c;
            }
        }

        System.out.println(max);
    }
}