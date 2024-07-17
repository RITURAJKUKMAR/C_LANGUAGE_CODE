#include<stdio.h>
#include<conio.h>
void RITU(int *p)
{
    int i,q;
    q=*p;
    for(i=1;i<q;i++)
    {
        *p=*p*i;
    }
    printf("Factorial of %d =%d ",q,*p);
}
int main()
{
    int n;
    printf("Enter a number\nN=");
    scanf("%d",&n);
    RITU(&n);
    getch();
}