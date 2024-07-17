//wap to print multiplication of matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k,j,s,a[3][3],b[3][3],c[3][3];
    printf("enter first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("multiplication matrix\n");
    for(k=0;k<3;k++)
    {
        for(i=0;i<3;i++)
        {
            s=0;
            for(j=0;j<3;j++)
            {
                s=s+a[i][j]*b[j][i];
            }
            c[k][i]=s;
            printf("%d\t",c[k][i]);
        }
        printf("\n");
    }
    getch();
}