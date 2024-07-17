#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[100],n;
    printf("Enter array size\nN=");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        int m=i;
        for(j=i+1;j<n;j++)
        {
            if(a[m]>a[j])
                m=j;
        }
        if(m!=i)
        {
            int t=a[m];
            a[m]=a[i];
            a[i]=t;
        }
    }
    printf("soted array elements are\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    getch();
}