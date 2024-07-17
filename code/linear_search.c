#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,x,a[100],f=0;
    printf("Enter array size.\n");
    scanf("%d",&n);
    printf("Enter array elements.\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter a number for searching in array elements.\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("find element at located %d",i);
    else
        printf("Element not found.");
    getch();
}