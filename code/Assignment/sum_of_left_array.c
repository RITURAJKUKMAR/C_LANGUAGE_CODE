#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[3][3],s;
    printf("enter your element\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    s=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            s=s+a[i][j];            
        }
    }
    printf("%d",s);
    getch();    
}