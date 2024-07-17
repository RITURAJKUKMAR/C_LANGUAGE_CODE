#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,m,x,l=0,h,a[100];
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray elements are =");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter search element\n");
    scanf("%d",&x);
    h=n;
    for(i=0;i<n;i++)
    {
        m=(l+h)/2;
        if(a[m]==x)
        {
            printf("element is fonud at location %d",m);
            break;
        }
        else if(a[m]<x)
            l=m+1;
        else
            h=m-1;
    }
    getch();
}