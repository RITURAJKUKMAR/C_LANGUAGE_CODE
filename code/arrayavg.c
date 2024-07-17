#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[5];
    float r=0;
    printf("enter your five sub marks\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        r=r+a[i];
    }
    printf("%f\n",r);
    printf("avg=%f",r/5);
    getch();
}