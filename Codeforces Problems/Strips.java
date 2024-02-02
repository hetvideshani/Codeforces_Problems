import java.util.*;

class Final{
	String[] s=new String[8];

	Final(String [] arr)
	{
		s = arr;
	}

	char lastPainted()
	{
		int i,j,flag=0;
		for(i=0;i<8;i++)
		{
			flag=0;
			for(j=0;j<7;j++)
			{
				if(s[i].charAt(j)!=s[i].charAt(j+1))
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				break;
				return s[i].charAt(i);
			}
		}
		if(flag==1)
		{
			for(i=0;i<8;i++)
			{
				flag=0;
				for(j=0;j<7;j++)
				{
					if(s[j].charAt(i)!=s[j+1].charAt(i))
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					break;
					return s[i].charAt(i);
				}
			}
		}
	}
}

public class Strips{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);

		int t;
		t=sc.nextInt();

		for(int i=0;i<t;i++)
		{
			String[] s = new String[8];

			Final f = new Final(s);

			char ch;

			ch=f.lastPainted();

			System.out.println(ch);
		}
	}
}