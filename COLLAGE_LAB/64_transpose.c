//wap to print transpose of matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r,c,a[100][100];
    printf("Enter the row and column size of matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter array elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    getch();
}