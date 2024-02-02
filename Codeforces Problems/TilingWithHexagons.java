import java.util.*;

public class TilingWithHexagons {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a, b, c, sum = 0;

        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        sum += (a + b - 1) * c;
        sum += (a - 1) * (b - 1);

        System.out.println(sum);
    }
}