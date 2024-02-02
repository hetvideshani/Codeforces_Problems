import java.util.*;

public class KingMoves {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        if (s.charAt(0) == 'a' || s.charAt(0) == 'h') {
            if (s.charAt(1) == '8' || s.charAt(1) == '1') {
                System.out.println(3);
            } else {
                System.out.println(5);
            }
        } else if (s.charAt(1) == '8' || s.charAt(1) == '1') {
            if (s.charAt(0) == 'a' || s.charAt(0) == 'h') {
                System.out.println(3);
            } else {
                System.out.println(5);
            }
        } else {
            System.out.println(8);
        }
    }
}