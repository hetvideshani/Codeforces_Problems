import java.util.*;

public class HowMuchDoesDaytonaCost {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n, k, i, flag = 0;

            n = sc.nextInt();
            k = sc.nextInt();

            int[] a = new int[n];

            for (i = 0; i < n; i++) {
                a[i] = sc.nextInt();

                if (a[i] == k) {
                    flag = 1;
                }
            }

            if(flag==0){
                System.out.println("NO");
            }
            else{
                System.out.println("YES");
            }
        }
    }
}