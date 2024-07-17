//wap to read and write elements from the 2-D array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r,c,a[100][100];
    printf("Enter the number row and column\n");
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
    printf("Array elements are=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
}