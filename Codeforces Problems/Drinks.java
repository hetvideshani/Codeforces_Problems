import java.util.*;

public class Drinks{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n;
        double sum=0;
        n = sc.nextInt();

        for(int i=0 ; i<n;i++)
        {
            int a;
            a = sc.nextInt();
            sum+=a;
        }

        System.out.println(sum/n);
    }
}