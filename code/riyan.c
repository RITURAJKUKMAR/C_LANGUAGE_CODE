#include<stdio.h>
#include<conio.h>
int I();
int LOVE();
int U();
int RIYA();
int main()
{
    I();
    printf("\n\n");
    LOVE();
    printf("\n\n");
    U();
    printf("\n\n");
    RIYA();
    getch();
}
int I()
{
   int i,j;
   system("color c");
   for(i=1;i<=11;i++)
   {
        for(j=1;j<=6;j++)
        {
            if((j==3||j==4)||(i==10||i==11)||(i==1||i==2))
                printf("LOVE");
            else
                printf("    ");
        }
        printf("\n");
   }
}
int LOVE()
{
    int i,j,k=2,p=10,a=4,b=7;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=11;j++)
        {
            if((j>k&&j<p||(i==3||i==4))&&(j<=3+i||9-i<=j))
            printf("R ");
                else
            printf("  "); 
        }
        i<3?a++:(a=-20);
        i<3?p++:(i<4?p=12:p--);
        i<3?k--:(i<4?k=0:k++);
        printf("\n");
    }
}
int U()
{
    int i,j;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=6;j++)
        {
            if((j==1||j==2)||(j==5||j==6)||(i==10||i==11))
                printf("LOVE");
            else
                printf("    ");
        }
        printf("\n");
    }
}
int RIYA()
{
    int i,j,o,p,q,r,s;
    for(i=1;i<=11;i++)
    {
        (i<7)?(q=5,r=6):(q=0,r=0);
        for(j=1;j<22;j++)
        {
            (j>1&&j<=6)?(s=6):(s=0);
            (j>=1&&j<=6)?(o=1,p=2):(o=0,p=0);
            if((i==o||i==p||j==1||j==2||j==q||j==r||i==s||j==i-4)||(i==1||i==2||i==11||i==10))
                printf("LOVE");
            else
                printf("    ");
        }
        printf("\n");
    }
}
//not final