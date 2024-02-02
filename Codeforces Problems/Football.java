import java.util.*;
public class Football{
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        int i=0,j,count=0;
        String s;
        s=sc.nextLine();

        while(i<s.length())
        {
            count=0;
            for(j=i;j<s.length()-1;j++)
            {
                if(s.charAt(j)==s.charAt(j+1))
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count>=6)
            {
                break;
            }
            i=j+1;
        }

        if(count>=6)
        {
            System.out.print("YES");
        }
        else
        {
            System.out.print("NO");
        }
    }
}