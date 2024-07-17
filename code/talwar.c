#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=5,r=5,a=5,l=5,c=0,b=0;
    for(i=1;i<=22;i++)
    {
        for(j=1;j<=9;j++)
        {            
            if((j==5)||(j==k||j==l)||(j==r||j==a)||(j==c||j==b)||(i==18||i==17))
             printf("*");
            else
             printf(" ");            
        }
        i==15?(c=9):(c=0);
        i==15?(b=1):(b=0);        
        i>3&&i<18?k=3:(k=5);
        i>1?l=4:(l=5);
        i>3&&i<18?r=7:(r=5);
        i>1?a=6:(a=5);
        printf("\n");       
    }
    getch();
}

