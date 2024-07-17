//wap to fine an element in the given array/sequential search.
#include<stdio.h>
#include<conio.h>
int main()
{
    int s=0,i,j,a[100],x,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements is =");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter element for scearching\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            s=1;
            break;
        }
    }
    if(s==1)
        printf("element is found location %d",i);
    else
        printf("element is not found");
    getch();
}