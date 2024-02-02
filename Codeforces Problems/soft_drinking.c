#include<stdio.h>

int main()
{
    int n,k,l,c,d,p,nl,np,drink,slice,salt,min;
    
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

    drink=k*l;
    drink=drink/nl;

    slice=c*d;

    salt=p/np;

    if(drink>slice)
    {
        if(slice>salt)
        {
            min=salt;
        }
        else
        {
            min=slice;
        }
    }
    else
    {
        if(drink>salt)
        {
            min=salt;
        }
        else
        {   
            min=drink;
        }
    }

    printf("%d",min/n);

    return 0;
}