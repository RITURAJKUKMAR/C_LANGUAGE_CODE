//wap to read array elements and then print the reverse order of entered elements.
#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c,i,j,a[100][100];
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
    printf("reverse order array elements are=\n");
    for(i=r-1;i>=0;i--)
    {
        for(j=c-1;j>=0;j--)
        {
            printf("%d\t",a[i][j]);               
        }
        printf("\n");
    }   
    getch();
}