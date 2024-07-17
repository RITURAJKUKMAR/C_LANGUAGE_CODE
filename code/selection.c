#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,j,m,t;
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=i;
        for(j=i+1;j<n;j++)
        if(a[m]>a[j])
        {
            m=j;
        }
        if(m!=i)
        {
            t=a[m];
            a[m]=a[i];
            a[i]=t;
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}