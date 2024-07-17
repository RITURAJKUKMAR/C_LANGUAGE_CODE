//72. WAP to implement malloc(), calloc(), realloc(), free() using concept of dma. 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int *p;
void m()
{
    p=(int*)malloc(sizeof(4));
    printf("Enter a number\n");
    scanf("%d",p);
    printf("your number = %d",*p);
    free(p);
}
void c()
{
    int n,i;
    printf("\nEnter array size.\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(4));
    printf("Enter your array elements.\n");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("your array elements=");
    for(i=0;i<n;i++)
        printf(" %d",*(p+i));
    free(p);
}
int main()
{
    m();
    c();
    getch();
}
//few little left