//wap to print largest number from 1-D array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,m,a[100];
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray element is= ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(m<a[i])
        m=a[i];
    }
    printf("\nlargest number=%d",m);
    getch();
}