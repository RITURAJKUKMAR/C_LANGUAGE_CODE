#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,r1,c1,a[1][2],b[2][1],d[2][2],i,j,k;
    printf("Enter the value of row and column of 1st matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter the value of row and column of 2nd matrix\n");
    scanf("%d%d",&r1,&c1);
    if(r!=c1)
    {
        printf("Matrix multiplication is not possible\n");
    }
    else
    {
        printf("Enter elements of 1st matrix\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);    //c1=a[i][j] in last term;
            }
        }
        printf("\nEnter elements of 2nd matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\n",c1);
                scanf("%d",&b[i][j]);      //problem;
            }
        }
        printf("\nTo maltiply matrix\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                d[i][j]=0;
                for(k=0;k<c;k++)
                {
                    d[i][j]=d[i][j]+a[i][k]*b[k][j];
                }
                printf("%d\t",d[i][j]);
            }
            printf("\n");
        }
    }
    getch();
}