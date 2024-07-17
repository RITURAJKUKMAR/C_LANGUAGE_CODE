//wap to read and write 1-D array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100];
    printf("enter array size\n");
    scanf("%d",&n);
    printf("Enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    getch();
}