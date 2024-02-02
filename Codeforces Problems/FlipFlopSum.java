import java.util.*;

class Final{
	int sum(int [] a)
	{
		int ans=0,i=0;
		while(i<a.length)
		{
			if(a[i]==1)
			{
				ans++;
				i++;
			}
			else if(a[i]==-1&&a[i+1]==-1)
			{
				ans+=2;
				i+=2;
			}
			else if((a[i]==-1&&a[i]==1)||(a[i]==1&&a[i]==-1))
			{
				ans--;
				i++;
			}
		}
		return ans;
	}
}

public class FlipFlopSum{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t,i,j;
		t=sc.nextInt();

		for(i=0;i<t;i++)
		{
			int n;
			n=sc.nextInt();

			Final f=new Final(); 

			int [] a = new int[n];

			for(j=0;j<n;j++)
			{
				a[j]=sc.nextInt();
			}

			System.out.println(f.sum(a));
		}
	}
}