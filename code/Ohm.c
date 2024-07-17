#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=2,r=15,l=4,p=20;
    
    for(i=1;i<=9;i++)
    {
        i>8?p=14:(p=-20);
        for(j=1;j<=9;j++)
        {
            if(j==k-i||j==r-i||(j==5||i==5)||(j>i+l||j<p-i))
            printf("*");
            else
            printf(" ");
            
        }
        l=20;        
        i>5?r++:0;
        i<5?k++:k--;
        printf("\n");
    }
    getch();
}