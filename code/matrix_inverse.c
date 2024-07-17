
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,a[3][3];
    printf("enter array element\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",a[i][j]);        
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    getch();
}