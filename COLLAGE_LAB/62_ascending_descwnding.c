//62.WAP to sort array elements in ascending and descending order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,t;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Araay elements are=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nelements in ascending order=");
    for(i=0;i<n;i++)
        for(j=1+i;j<n;j++)
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nelements in descending order=");
    for(i=0;i<n;i++)
        for(j=1+i;j<n;j++)
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    getch();
}