#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *p;
int print()
{
    int a,b,c;
    p=fopen("Sum.txt","w");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    else
        printf("file is open\n");
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    fprintf(p,"sum of %d and %d is %d",a,b,c);
    fclose(p);
    getch();
}
int scan()
{
    int a,b,c;
    fopen("Sum.txt","r");
    fscanf(p,"%d %d %d",&a,&b,&c);
    printf("\n%d %d %d",a,b,c);
    fclose(p);
}
int main()
{
    print();
    scan();
    getch();
}