//wap to pass the array element using function.
#include<stdio.h>
#include<conio.h>
void array(int*);
int main()
{
    int a[20],i;
    printf("Enter array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("\n");
    int *p=&a[0];
    array(p);
    getch();
}
void array(int *p)
{
    printf("Array elements are ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}