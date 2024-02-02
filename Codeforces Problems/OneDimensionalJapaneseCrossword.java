import java.util.*;

public class OneDimensionalJapaneseCrossword {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), c = 0, i, flag = 0;
        sc.nextLine();

        String s = sc.nextLine();

        i = 0;
        while (i < n) {
            flag = 0;

            while (s.charAt(i) == 'B') {
                flag = 1;
                i++;
                if (i == n) {
                    break;
                }
            }

            if (flag == 1) {
                c++;
            }
            i++;
        }

        System.out.println(c);

        i = 0;

        while (i < n) {
            c = 0;
            while (s.charAt(i) == 'B') {
                c++;
                i++;
                if (i == n) {
                    break;
                }
            }
            if (c != 0) {
                System.out.print(c + " ");
            }
            i++;
        }
    }
}