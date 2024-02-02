import java.util.*;

public class Football_new {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i, j, max = 0, count = 0, index = 0;

        String[] arr = new String[n];
        String s = sc.nextLine();

        for (i = 0; i < n; i++) {
            arr[i] = sc.nextLine();
        }

        for (i = 0; i < n; i++) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i].equals(arr[j]) == true) {
                    count++;
                }
            }
            if (count > max) {
                max = count;
                index = i;
            }
        }

        System.out.println(arr[index]);
    }
}
