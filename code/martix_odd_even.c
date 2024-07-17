#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[5];
    printf("enter array element\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);        
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);        
    }
    getch();
}