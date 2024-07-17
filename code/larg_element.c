#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,l;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
            l=a[i];
    }
    printf("largest element in this array = %d",l);
    getch();
}