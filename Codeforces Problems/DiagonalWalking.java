import java.util.*;

public class DiagonalWalking {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i = 0, c = 0;
        sc.nextLine();
        String s = sc.nextLine();

        while (i < s.length() - 1) {
            if ((s.charAt(i) == 'U' && s.charAt(i + 1) == 'R') || (s.charAt(i) == 'R' && s.charAt(i + 1) == 'U')) {
                i += 2;
                c++;
            } else {
                i++;
            }
        }
        System.out.println(n - c);
    }
}