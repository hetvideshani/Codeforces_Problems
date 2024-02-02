#include<stdio.h>

int main()
{
	int n,a,b,i,j,count=1,flag=0;

	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
	}

	scanf("%d",&a);
	int p[a];
	
	for(i=0;i<a;i++)						// 2 2 3 1 
	{										// 2 4 3
		scanf("%d",&p[i]);
	}

	scanf("%d",&b);
	int q[b];

	for(i=0;i<b;i++)
	{
		scanf("%d",&q[i]);
	}

	if(a+b<n)
	{
		printf("Oh, my keyboard!");
	}
	else
	{
		int fin[a+b];
		for(i=0;i<a;i++)
		{
			fin[i]=p[i];
		}
		for(j=0;j<b;j++,i++)
		{
			fin[i]=q[j];
		}

		for(i=0;i<n;i++)
		{
			flag=0;
			for(j=0;j<a+b;j++)
			{
				if(arr[i]==fin[j])
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				break;
			}
		}

		if(flag==0)
		{
			printf("Oh, my keyboard!");
		}
		else
		{
			printf("I become the guy.");
		}
	}

}
