#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/*void NAME()
{
    
}*/
int main()
{
    int x=25,y=25;    
    char a[20];
    printf("Enter your name\n");
    gets(a);
    while(1)
    {
        switch(getch())
        {
            case 75: //LEFT
                x--;
                break;
            case 72:  //UP
                y--;
                break;
            case 80:  //DOWN
                y++;
                break;
            case 77:  //RIGHT
                x++;
                break;
            case 27:  //Esc = SKIP
                exit(1);
        }
        system("cls");
        for(int i=0;i<50;i++)
        {
            for(int j=0;j<50;j++)
            {
                if(x==i&&y==j)
                    printf("%s",a);
                else
                    printf(" ");
            }   
        }
    }
    return 0;
    getch();
}