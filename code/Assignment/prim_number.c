//wap to to print the prime number between 1 to 500;
#include<stdio.h>
#include<conio.h>
int main()
{
    int j,i,r;
    printf("prime number 1 to 500\n");
    for(i=2;i<=500;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;            
        }
        if(i==j)
        printf("%d\n",i);
    }
    getch();
}