import java.util.*;

public class RepeatingCipher {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(), i = 0, c = 1;
        sc.nextLine();

        String s = sc.nextLine();

        while (i < s.length()) {
            System.out.print(s.charAt(i));
            i += c;
            c++;
        }

        sc.close();
    }
}