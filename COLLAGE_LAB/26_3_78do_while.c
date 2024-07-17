//26.3_wap to print sequence 78,79,80,......89 using do while loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=1,k=78;
    do
    {
        printf("%d ",k);
        n++;
        k++;
    } 
    while (n<=12);
    getch();
}