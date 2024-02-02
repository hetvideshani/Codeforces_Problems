#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char a[202],b[101],c[101],temp;

    scanf("%s",a);                                              //SANTACLAUS                    ==10
    scanf("%s",b);                                              //DEDMOROZ                      ==8
    scanf("%s",c);                                              //SANTAMOROZDEDCLAUS            ==18

    for(i=0;i<strlen(c);i++)
    {
        temp=c[i];
        for(j=0;j<strlen(c);j++)
        {
            if(c[j]>c[i])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    strcat(a,b);

    for(i=0;i<strlen(a);i++)
    {
        temp=a[i];
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    if(strcmp(a,c)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}