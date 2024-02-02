import java.util.*;

public class Sleuth {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();
        int i = s.length() - 1;

        while (i >= 0) {
            if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
                    || s.charAt(i) == 'u' || s.charAt(i) == 'y' || s.charAt(i) == 'A' || s.charAt(i) == 'E'
                    || s.charAt(i) == 'I'
                    || s.charAt(i) == 'O'
                    || s.charAt(i) == 'U' || s.charAt(i) == 'Y') {
                System.out.println("YES");
                break;
            } else if (s.charAt(i) <= 90 && s.charAt(i) >= 65 || s.charAt(i) <= 122 && s.charAt(i) >= 97) {
                System.out.println("NO");
                break;
            }
            i--;
        }
    }
}