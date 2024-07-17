//Write a program to copy the elements of an array into another array and then print the second array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[20],b[20];
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("after copy array elements another array\n");
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    getch();
}