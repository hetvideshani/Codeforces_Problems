import java.util.*;

public class Eleven {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i, c, p;

        for (i = 1; i <= 3 && i <= n; i++) {
            System.out.print("O");
        }

        c = 3;
        p = 2;

        for (i = 4; i <= n; i++) {
            if (i == c + p) {
                System.out.print("O");
                p = c;
                c = i;
            } else {
                System.out.print("o");
            }
        }
    }
}