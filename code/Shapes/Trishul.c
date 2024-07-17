/*Wap to print the following shape.

 *     *     * 
  *    *    *
  **  ***  **
  **  ***  **
  *  *****  *  
 *   *****   *
**    ***    **
**    ***    **
***************
 *     *     *
       *
       *
       *
       *
       *
       *
       *
       *
       *
       *
       *     

*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a,b,c,d,e,f,g,h,k,l,m,n,o;
    for(i=1;i<=21;i++)
    {
        i>2&&i<10?a=7:(a=8);
        i>2&&i<10?b=9:(b=8);
        i>4&&i<7?c=6:(c=8);
        i>4&&i<7?d=10:(d=8);
        i>1&&i<6?e=3:i==1?e=2:(e=8);
        (i>5&&i<11)?f=2:(f=8);
        (i>2&&i<5)?g=4:(g=8);
        (i>6&&i<9)?h=1:(h=8);
        (i>5&&i<11)?k=14:(k=8);
        (i>2&&i<5)?l=12:(l=8);
        (i>6&&i<9)?m=15:(m=8);
        i>1&&i<6?n=13:i==1?n=14:(n=8);
        
        for(j=1;j<=15;j++)
        {
            if((j==8||i==9)||(j==a||j==b)||(j==c||j==d)||(j==e||j==f)||(j==g||j==h)||(j==k||j==l||j==m||j==n))
             printf("*");
            else
             printf(" ");
        }
        
        printf("\n");
    }
    getch();
}