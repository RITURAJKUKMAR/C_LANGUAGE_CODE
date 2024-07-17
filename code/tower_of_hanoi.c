#include<stdio.h>
#include<conio.h>
void TOWER(int n,char a1,char b2,char c3)
{
    if(n>=1)
    {
        TOWER(n-1,a1,c3,b2);
        printf("%c to %c\n",a1,c3);
        TOWER(n-1,b2,a1,c3);
    }
}
int main()
{
    int n;
    char a,b,c;
    printf("Enter the number of disks\nD=");
    scanf("%d",&n);
    printf("\n");
    TOWER(n,a,b,c);
    getch();
}