import java.util.*;

public class TenWordsofWisdom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int max = 0, j = 1, index = 0;

            while (j <= n) {
                int a, b;
                a = sc.nextInt();
                b = sc.nextInt();

                if (a <= 10 && b >= max) {
                    max = b;
                    index = j;
                }
                j++;
            }
            System.out.println(index);
        }
    }
}
