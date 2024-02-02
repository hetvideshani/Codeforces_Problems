    import java.util.*;

    public class BanBan{
        public static void main(String[] args)
        {
            Scanner sc = new Scanner(System.in);

            int t;
            t=sc.nextInt();

            for(int i=0;i<t;i++)
            {
                int n;
                n=sc.nextInt();
                int a,b;
                a=1;
                b=3*n;

                if(n==1)
                {
                    System.out.println("1");
                    System.out.println("1 3");
                }
                else
                {
                    if(n%2==0)
                    {
                        System.out.println(n/2);
                        for(int j=1;j<=n/2;j++)
                        {
                            System.out.println(a+" "+b);
                            a+=3;
                            b-=3;
                        }
                    }
                    else
                    {
                        System.out.println((n/2)+1);
                        for(int j=1;j<=(n/2)+1;j++)
                        {
                            System.out.println(a+" "+b);
                            a+=3;
                            b-=3;
                        }
                    }
                    
                }
            }

        }
    }