import java.util.*;

public class cheapTravel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m, a, b, sim, d, com;

        n = sc.nextInt();
        m = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();

        sim = a * n; // 7632
        d = n / m; // 238

        com = d * b; // 3332

        if (n % m != 0) { //
            if (com + b < com + ((n % m) * a)) { // 3346
                com += b;
            } else {
                com += (n % m) * a;
            }
        }

        if (sim < com) {
            System.out.println(sim);
        } else {
            System.out.println(com);
        }
    }
}
