#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[100],i,j,t;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i-1;j>=0&&t<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=t;
    }
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}