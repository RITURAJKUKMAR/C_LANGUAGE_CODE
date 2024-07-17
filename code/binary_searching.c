#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,x,i,l,h,m;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the number for searching\n");
    scanf("%d",&x);
    l=0;
    h=n;
    for(i=0;i<n;i++)
    {
        m=(l+h)/2;
        if(a[m]==x)
        {
            printf("your value location is %d",m);
            break;
        }
        if(a[m]<x)
            l=m+1;
        else
            h=m-1;
    }
    printf("\nyour number is not present in array");
    getch();
}