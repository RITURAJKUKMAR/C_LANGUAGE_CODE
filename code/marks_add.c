#include<stdio.h>
#include<conio.h>
main()
{
    int marks;
    printf("enter your marks");
    scanf("%d",marks);
    if(marks>=300)
    {
        printf("first");
    }
    else if(marks>=250)
    {
        printf("second");
    }
    else if(marks>=145)
    {
        printf("third");
    }
    else
    
    printf("you r fail");
    
    getch();
}