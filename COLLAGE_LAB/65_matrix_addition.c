//wap to print addition of two matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r,c,a[100][100],b[100][100];
    printf("enter the value of row and column\n");
    scanf("%d%d",&r,&c);
    printf("Enter first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("addition of matri A and matrix B\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}