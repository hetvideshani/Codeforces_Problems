#include<stdio.h>
#include<string.h>

int main()
{
    char s[101],temp,max='3';
    int i,j,k=0;                       

    scanf("%s",s);
                                               
    for(i=0;i<strlen(s);i+=2)                       
    {
        temp=max;                         
        for(j=i;j<strlen(s);j+=2)            
        {                                       
            if(s[j]<temp)                    
            {
                temp=s[j];                      
                s[j]=s[i];                     
                s[i]=temp;                      
            }
        }
    }                                          
    
    printf("%s",s);

    return 0;
}