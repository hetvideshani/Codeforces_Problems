#include<stdio.h>
#include<string.h>

int main()
{
    int i,flag=0;
    char a[100], b[100];

    scanf("%s",a);
    scanf("%s",b);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(b[i]>='a'&&b[i]<='z')
        {
            b[i]=b[i]-32;
        }
    }

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>b[i])
        {
            flag=1;
            printf("1");
            break;
        }
        else if(a[i]<b[i])
        {
            flag=1;
            printf("-1");
            break;;
        }
    }

    if(flag==0)
    {
        printf("0");
    }


    return 0;
}