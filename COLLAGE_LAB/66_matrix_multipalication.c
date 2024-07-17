//wap to print multipalication of two matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,r,c,s,a[100][100],b[100][100],m[100][100];
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
    printf("multipalication of matri A and matrix B\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s=0;
            for(k=0;k<3;k++)
            {
                s=s+(a[i][k]*b[k][j]);
            }
            m[i][j]=s;
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    getch();
}