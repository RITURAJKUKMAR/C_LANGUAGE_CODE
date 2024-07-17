#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,a[100],t,m;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        m=i;
        for(j=i+1;j<n;j++)
        {
            if(a[m]>a[j])
            {
                m=j;
            }
        }
        if(a[m]!=a[i])
        {
            t=a[m];
            a[m]=a[i];
            a[i]=t;
        }
    }
    printf("sorted array elements\n");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}