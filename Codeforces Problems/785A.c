#include<stdio.h>

int main()
{
    int n,i,sum=0;
    char s[20];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",s);

        if(s=="Tetrahedron")
        {
            sum=sum+4;
        }
        else if(s=="Cube")
        {
            sum=sum+6;
        }
        else if(s=="Octahedron")
        {
            sum=sum+8;
        }
        else if(s=="Dodecahedron")
        {
            sum=sum+12;
        }
        else if(s=="Icosahedron")
        {
            sum=sum+20;
        }
    }

    printf("%d",sum);
    
    return 0;
}