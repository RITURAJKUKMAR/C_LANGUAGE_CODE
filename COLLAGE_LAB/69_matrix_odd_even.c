//wap to find array and then print even and odd number from main array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[100][100],c,r;
    printf("Enter array size row and column\n");
    scanf("%d%d",&r,&c);
    printf("Enter array element\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Odd number=");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2!=0)
            printf("%d ",a[i][j]);
        }
    }
    printf("\neven number=");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            printf("%d ",a[i][j]);
        }
    }
    getch();
}