#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j<=6-i||j>=4+i||j<=i-4||j>=14-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

/*int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j<=6-k||j>=4+k)
                printf("*");
        }*/