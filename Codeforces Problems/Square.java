import java.util.*;

public class Square {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int a1, a2, b1, b2, min1, min2, maxf;

            a1 = sc.nextInt();
            a2 = sc.nextInt();
            b1 = sc.nextInt();
            b2 = sc.nextInt();

            if (a1 == b1 || a1 == b2 || a2 == b1 || a2 == b2) {
                min1 = Math.min(a1, a2);
                min2 = Math.min(b1, b2);

                maxf = Math.max(a1, a2);

                if (min1 + min2 == maxf) {
                    System.out.print("Yes\n");
                } else {
                    System.out.print("No\n");
                }
            } else {
                System.out.print("No\n");
            }
        }
    }
}