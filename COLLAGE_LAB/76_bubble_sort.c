#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,a[100],t;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray elements are=");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nsorted array =");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}