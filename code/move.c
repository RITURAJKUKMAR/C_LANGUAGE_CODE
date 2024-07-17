#include<stdio.h>
#include<conio.h>
int I();
int main()
{
    for(int i=0;i<4;i=2)
    {
        I();
    }    
    getch();
}
int I()
{
   int i,j;
   system("cls");
   int x=1,y=1;
   while(1)
    {
        for(i=x;i<=11;i++)
        {
                for(j=y;j<=6;j++)
                {
                    if((j==3||j==4)||(i==10||i==11)||(i==1||i==2))
                        printf("LOVE");
                    else
                        printf("    ");
                }
                printf("\n");
        }
        y++;
    }

}