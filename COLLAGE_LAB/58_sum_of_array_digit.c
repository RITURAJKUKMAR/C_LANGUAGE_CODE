//wap to print sum of array digits.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],s=0;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter your array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your element is ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
        s=s+a[i];
    }
    printf("\nsum of array digit =%d",s);
    getch();
}