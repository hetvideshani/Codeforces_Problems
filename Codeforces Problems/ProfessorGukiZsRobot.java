import java.util.*;

public class ProfessorGukiZsRobot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x1, y1, x2, y2;

        x1 = sc.nextInt();
        y1 = sc.nextInt();
        x2 = sc.nextInt();
        y2 = sc.nextInt();

        System.out.println(Math.max(Math.abs(x1 - x2), Math.abs(y1 - y2)));
    }
}