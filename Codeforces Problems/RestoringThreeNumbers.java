import java.util.*;

public class RestoringThreeNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i, max = 0;
        int[] a = new int[4];

        for (i = 0; i < 4; i++) {
            a[i] = sc.nextInt();
            if (a[i] > max) {
                max = a[i];
            }
        }

        for (i = 0; i < 4; i++) {
            if (a[i] != max) {
                System.out.print(max - a[i] + " ");
            }
        }
    }
}