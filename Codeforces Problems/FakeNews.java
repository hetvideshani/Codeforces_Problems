import java.util.Scanner;

public class FakeNews {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine(), p = "heidi";
        int i, j;

        for (i = 0, j = 0; i < s.length(); i++) {
            if (s.charAt(i) == p.charAt(j)) {
                j++;
                if (j == 5) {
                    System.out.println("YES");
                    return;
                }
            }
        }
        System.out.println("NO");

    }
}
