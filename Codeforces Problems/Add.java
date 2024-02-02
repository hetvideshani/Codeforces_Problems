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