import java.util.*;

public class RightLeftCipher {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();
        int i, j;

        if (s.length() % 2 == 0) {
            i = (s.length() / 2) - 1;
            j = i + 1;
            for (; i >= 0 && j < s.length(); i--, j++) {
                System.out.print(s.charAt(i) + "" + s.charAt(j));
            }
        } else {
            i = (s.length() / 2);
            j = i + 1;
            for (; i >= 0 && j < s.length(); i--, j++) {
                System.out.print(s.charAt(i) + "" + s.charAt(j));
            }
            System.out.print(s.charAt(i));
        }
    }
}