import java.util.*;

public class PatrickAndShopping {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int d1, d2, d3, min = 0;
        d1 = sc.nextInt();
        d2 = sc.nextInt();
        d3 = sc.nextInt();

        min = d1 + d2 + d3;

        if (2 * (d1 + d2) < min) {
            min = 2 * (d1 + d2);
        }
        if (2 * (d1 + d3) < min) {
            min = 2 * (d1 + d3);
        }
        if (2 * (d2 + d3) < min) {
            min = 2 * (d2 + d3);
        }

        System.out.println(min);
    }
}