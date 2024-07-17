//25.wap to find the area of circle,rectangle,sqare,triangle using switch case.
#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define square(a) a*a
#define half 0.5
#define product(b,c) b*c
int main()
{ 
    int n,r,l,b,s,a,c;
    printf("press 1 for area of cicle\n");
    printf("press 2 for area of rectangle\n");
    printf("press 3 for area of square\n");
    printf("press 4 for area of triangle\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("enter radius of circle\n");
        scanf("%d",&r);        
        printf("area of circle=%f",pi*square(r));
        break;
        case 2:
        printf("enter the value of l and b\n");
        scanf("%d%d",&l,&b);
        printf("area of rectangle=%d",l*b);
        break;
        case 3:
        printf("enter the value of side\n");
        scanf("%d",&s);
        printf("area of square=%d",square(s));
        break;
        case 4:
        printf("enter the b and h\n");
        scanf("%d%d",&a,&c);
        printf("area of triangle=%f",half*product(a,c));
        break;
        default:
        printf("invalid number");
    }
    getch();
}