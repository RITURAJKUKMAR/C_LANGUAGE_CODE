//26.1_wap to print sequence 78,79,80,........,89 using for loop.
#include<stdio.h>
#include<conio.h>
main()
{
    int n,k=78;
    for(n=1;n<=12;n++)
    {
        printf("%d ",k);
        k++;
    }
    getch();
}