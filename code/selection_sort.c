#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,m,t;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        m=i;
        for(j=1+i;j<n;j++)
        {
            if(a[m]>a[j])
            {
                m=j;
            }
        }
            if(m!=i)
            {
                t=a[m];
                a[m]=a[i];
                a[i]=t;
            }
    }
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}