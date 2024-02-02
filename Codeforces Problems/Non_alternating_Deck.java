import java.util.*;

public class Non_alternating_Deck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), alice, bob, i, flag = 0;

            alice = 1;
            bob = 0;
            i = 2;
            n--;

            while (n > 0) {
                if (flag == 0) {
                    if (n - i >= 0) {
                        bob += i;
                        n -= i;
                    } else {
                        bob += n;
                        break;
                    }
                    i++;
                    if (n - i >= 0) {
                        bob += i;
                        n -= i;
                    } else {
                        bob += n;
                        break;
                    }
                    flag = 1;
                } else {
                    if (n - i >= 0) {
                        alice += i;
                        n -= i;
                    } else {
                        alice += n;
                        break;
                    }
                    i++;
                    if (n - i >= 0) {
                        alice += i;
                        n -= i;
                    } else {
                        alice += n;
                        break;
                    }
                    flag = 0;
                }
                // System.out.println(alice + " " + bob);
                i++;
            }

            System.out.println(alice + " " + bob);
        }
    }
}
