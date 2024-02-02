import java.util.*;

public class SuffixThree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s = sc.nextLine();
            int n = s.length() - 1;
            if (n >= 0) {
                if (s.charAt(n) == 'o') {
                    System.out.println("FILIPINO");
                } else if (s.charAt(n) == 'a') {
                    System.out.println("KOREAN");
                } else {
                    System.out.println("JAPANESE");
                }
            }
        }
    }
}