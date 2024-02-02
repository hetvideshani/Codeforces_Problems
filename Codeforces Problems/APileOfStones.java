import java.util.*;

public class APileOfStones {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), c = 0, i;
        i = 0;
        sc.nextLine();
        String s = sc.nextLine();

        while (i < n) {
            if (s.charAt(i) == '-') {
                if (c != 0) {
                    c--;
                }
            } else if (s.charAt(i) == '+') {
                c++;
            }
            i++;
        }

        System.out.println(c);
    }
}