import java.util.*;

public class AleksaAndStack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n, i, a = 6, b = 8, c = 12;
            n = sc.nextInt();

            System.out.print("6 8 12 ");

            i = 3;
            while (i < n) {
                a = b;
                b = c;
                c++;

                if ((3 * c) % (a + b) == 0) {
                    c++;
                }
                System.out.print(c + " ");
                i++;
            }
            System.out.println();
        }
    }
}