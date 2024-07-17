#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
void arrow();
void ans();
void box();
int main()
{
    int b=0,i,arr[4][4],a[16],t,l=0,j;
    char c;
    system("cls");
    printf("\t[NUMBER PUZZLE]\n\n");
    printf("\n\t[TOTAL MOVES=100]\n\n");
    printf("Press [UP ARROW KEY] for 'UP' side.\n\nPress [DOWN ARROW KEY] for 'DOWN' side.\n\nPress [LEFT ARROW KEY] for 'LEFT' side.\n\nPress [RIGHT ARROW KEY] for 'RIGHT' side.\n\nPress [E/e] any time for 'EXIT' game.\n\n\n");
    box();
    printf("\n");
    arrow();
    printf("\n");
    ans();
    printf("\n\nPress [ENTER] for 'START' game.");
    getch();
    system("cls");
    system("color e");
    printf("LOADING ");
    for(i=0;i<6;i++)
    {
        sleep(1);
        printf(".");
    }
    sleep(1);
    system("color 2");
    system("cls");
    printf("\t[REMAINDER MOVES =100]\n\n");
    box();
    srand(time(NULL));
    for(i=0;i<16;i++)
    {
        r1:
        t=rand()%16;
        for(j=0;j<i;j++)
        {
            if(a[j]==t)
                goto r1;
        }
        a[i]=t;
    }
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
    {
        arr[i][j]=a[l];
        l++;
    }
    for(l=100;l>0;l)
    {
        kbhit();
        c=getch();
        switch(c)
        {
            case'e':
            case'E':
                system("color c");
                printf("\n\t    [GAME END]\n\n");
                getch();
                exit(1);
            case 80:
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        b=0;
                        if(arr[i][j]==0)
                        {
                            if(i==0)
                            {
                                b++;
                                break;
                            }
                            else
                            {
                                t=arr[i][j];
                                arr[i][j]=arr[i-1][j];
                                arr[i-1][j]=t;
                                l--;
                                b++;
                                break;
                            }
                        }
                    }
                    if(b==0)
                        continue;
                    else
                        break;
                }
                break;
            case 75:
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        b=0;
                        if(arr[i][j]==0)
                        {
                            if((i==3&&j==3)||(j==3))
                            {
                                b++;
                            }
                            else
                            {
                                t=arr[i][j];
                                arr[i][j]=arr[i][j+1];
                                arr[i][j+1]=t;
                                b++;
                                l--;
                                break;
                            }
                        }
                    }
                    if(b==0)
                        continue;
                    else
                        break;
                }
                break;
            case 77:
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        if(arr[i][j]==0)
                        {
                            if((i==0&&j==0)||(j==0))
                            {
                                break;
                            }
                            else
                            {
                                t=arr[i][j];
                                arr[i][j]=arr[i][j-1];
                                arr[i][j-1]=t;
                                l--;
                                break;
                            }
                        }
                    }
                }
                break;
            case 72:
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        b=0;
                        if(arr[i][j]==0)
                        {                            
                            if(i==3&&j==3)
                            {
                            }
                            else if(i==3)
                            {
                                b++;
                                break;
                            }
                            else
                            {
                                t=arr[i][j];
                                arr[i][j]=arr[i+1][j];
                                arr[i+1][j]=t;
                                l--;
                                b++;
                                break;
                            }
                        }
                    }
                    if(b==0)
                        continue;
                    else
                        break;
                }
                break;
            default:
                break;
        }
        system("cls");
        printf("\t[REMAINDER MOVES = %d]\n\n",l);
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(arr[i][j]==0)
                {
                    printf("|\t|");
                }
                else
                {
                    printf("|  %d\t|",arr[i][j]);
                }
            }
            printf("\n");
        }
        if(arr[0][0]==1&&arr[0][1]==2&&arr[0][2]==3&&arr[0][3]==4&&arr[1][0]==5&&arr[1][1]==6&&arr[1][2]==7&&arr[1][3]==8&&arr[2][0]==9&&arr[2][1]==10&&arr[2][2]==11&&arr[2][3]==12&&arr[3][0]==13&&arr[3][1]==14&&arr[3][2]==15&&arr[3][3]==0)
        {
            system("color d");
            printf("\n\t   \3[YOU'VE WON]\3\n\n");
            getch();
            exit(1);
        }
    }
    system("color c");
    printf("\n\t  \1[GAME OVER]\1\n\n");
    getch();
}
void box()
{
    int arr[4][4],a[16],i,j,l=0,t;
    srand(time(NULL));
    for(i=0;i<16;i++)
    {
        r1:
        t=rand()%16;
        for(j=0;j<i;j++)
        {
            if(a[j]==t)
                goto r1;
        }
        a[i]=t;
    }
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
    {
        arr[i][j]=a[l];
        l++;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {       
            if(arr[i][j]==0)
            {
                printf("|\t|");
            }
            else
            {
                printf("|  %d\t|",arr[i][j]);
            }
        }
        printf("\n");
    }
}
void ans()
{
    int arr[4][4],i,j;
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[0][3]=4;
    arr[1][0]=5;
    arr[1][1]=6;
    arr[1][2]=7;
    arr[1][3]=8;
    arr[2][0]=9;
    arr[2][1]=10;
    arr[2][2]=11;
    arr[2][3]=12;
    arr[3][0]=13;
    arr[3][1]=14;
    arr[3][2]=15;
    arr[3][3]=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[i][j]==0)
            {
                printf("|\t|");
            }
            else
            {
                printf("|  %d\t|",arr[i][j]);
            }
        }
        printf("\n");
    }
}
void arrow()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=33;j++)
        {
            if(j>=i+10&&j<21-i)
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }
}