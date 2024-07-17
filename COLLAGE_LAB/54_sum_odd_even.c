//wap to print odd and even nuumber from 1-D array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],o=0,e=0;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("Enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are= ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            e=e+a[i];            
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            o=o+a[i];
    }
    printf("\nsum of odd no.=%d",o);
    printf("\nsum of even no.=%d",e);
    getch();
}