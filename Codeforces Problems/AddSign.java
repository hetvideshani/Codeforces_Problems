import java.util.*;

class TestCaseH {
    int n;
    String s;

    void set(int n, String s) {
        this.n = n;
        this.s = s;
    }

    String finalString() {
        String ans = "";
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if ((s.charAt(i) == '0' && s.charAt(i + 1) == '1') || (s.charAt(i) == '1' && s.charAt(i + 1) == '0')) {
                ans = ans.substring(0, i) + "+";
            }
            if (i == 0) 
            {
                if (s.charAt(i) == '0' && s.charAt(i + 1) == '1') 
                { 
                    ans = ans.substring(0, i) + "+";
                    sum++;
                } else if (s.charAt(i) == '1' && s.charAt(i) == '1') {
                    ans = ans.substring(0, i) + "-";
                } else {
                    ans = ans.substring(0, i) + "+";
                }
            } 
            else if ((s.charAt(i) == '0' && s.charAt(i + 1) == '1')|| (s.charAt(i) == '1' && s.charAt(i + 1) == '0')) 
            {
                if (sum == 0 && s.charAt(i) == '1') {
                    ans = ans.substring(0, i) + "+";
                    sum++;
                } else if (sum == 0 && s.charAt(i + 1) == '0') {
                    ans = ans.substring(0, i) + "+";
                } else if (sum != 0 && s.charAt(i + 1) == '0') {
                    ans = ans.substring(0, i) + "+";
                } else if (sum != 0 && s.charAt(i + 1) == '1') {
                    ans = ans.substring(0, i) + "-";
                    sum--;
                }
            }
            else if(s.charAt(i)=='1'&&s.charAt(i)=='1')
            {
                if(sum==0)
                {
                    ans = ans.substring(0, i) + "+";
                    sum++;
                }
                else
                {
                    ans = ans.substring(0, i) + "-";
                    sum--;
                }
            }
        }

        return ans;
    }
}

public class AddSign{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int x;
        x=sc.nextInt();

        TestCaseH t = new TestCaseH();

        for(int i=0;i<x;i++)
        {
            int n;
            n=sc.nextInt();
            String s;
            s=sc.nextLine();

            t.set(n,s);

            System.out.println(t.finalString());

        }
   
    }
}