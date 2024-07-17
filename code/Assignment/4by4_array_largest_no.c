#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a[4][4],i,j,m;
    printf("enter array element\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("your matirx\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    m=a[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(m<a[i][j])
            m=a[i][j];
        }
    }  
    printf("largest element=%d",m);
    getch();  
}