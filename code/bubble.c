#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],x,n,i,l,t,j;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    l=a[0];
    for(i=0;i<n;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }     
    }
    printf("After sorting array elements =");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    getch();
}