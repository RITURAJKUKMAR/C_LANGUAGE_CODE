//63.wap to print diagonal matrix from the 2-D matrix, diagonal matrix, sum of diagonal.
#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c,i,j,a[100][100],s=0;
    printf("Enter the row and column of array\n");
    scanf("%d%d",&r,&c);
    printf("Enter the array element\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Array elements are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal elements are=");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                s=s+a[i][j];
            }
        }
    }
    printf("\nsum of diagonal=%d",s);
    getch();
}