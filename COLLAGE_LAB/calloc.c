#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("Enter the array size\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(4));
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    printf("your array elements=");
    for(i=0;i<n;i++)
        printf(" %d",*(p+i));
    free(p);
    getch();
}