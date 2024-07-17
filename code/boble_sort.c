#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,r,x;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nAraay elements are=");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nafter sorting array elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                r=a[j];
                a[j]=a[j+1];
                a[j+1]=r;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}