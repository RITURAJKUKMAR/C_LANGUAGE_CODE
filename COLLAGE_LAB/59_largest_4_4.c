//WAP to find largest number of elements in 4×4 matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[4][4],i,j,m;
    printf("Enter array elements\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    m=a[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(m<a[i][j])
                m=a[i][j];
    }
    printf("\nlargest number=%d",m);
    getch();
}