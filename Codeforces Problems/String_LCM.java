import java.util.*;

public class String_LCM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();
        while (n-- > 0) {
            String s, t, min, max;

            s = sc.nextLine();
            t = sc.nextLine();

            if (s.length() < t.length()) {
                min = s;
                max = t;
            } else {
                min = t;
                max = s;
            }

            int i = 0;

            if (max.length() % min.length() == 0) {
                String str = "";

                while (str.length() < max.length()) {
                    str += min;
                }

                if (max.equals(str)) {
                    System.out.println(max);
                } else {
                    System.out.println(-1);
                }
            } else {
                i = 1;
                int flag = 0;
                while (i < max.length()) {
                    if (max.charAt(0) != max.charAt(i)) {
                        flag = 1;
                        break;
                    }
                    i++;
                }
                if (flag == 0) {
                    i = 0;
                    while (i < min.length()) {
                        if (max.charAt(0) != min.charAt(i)) {
                            flag = 1;
                            break;
                        }
                        i++;
                    }
                }
                if (flag == 0) {
                    String str = "", ch = min.charAt(0) + "";

                    i = 0;
                    while (i < min.length() * max.length()) {
                        str += ch;
                        i++;
                    }

                    System.out.println(str);
                } else {
                    System.out.println(-1);
                }
            }
        }
    }
}