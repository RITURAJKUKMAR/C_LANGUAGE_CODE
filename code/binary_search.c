#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[100],n,x,f=0,l,h,t;
    printf("Enter array size.\n");
    scanf("%d",&n);
    h=0;
    l=n;
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Eter a number for searching in array elements.\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        t=(l+h)/2;
        if(a[t]==x)
        {
            f=1;
            break;
        }
        else if(a[t]>x)
        {
            l=t+1;
        }
        else
            h=t-1;
    }
    if(f==1)
        printf("found element located at %d",t);
    else
        printf("Element not found.");
    getch();
}