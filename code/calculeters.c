#include<stdio.h>
#include<conio.h>
main()
{

    float a,b,c;    
    char op;
    while(1)
    {      
        printf("\nEnter your opereter\n");
        scanf(" %c",&op);
        printf("Enter your first number\n");
        scanf("%f",&a);
        printf("Enter your second number\n");
        scanf("%f",&b);
        //clrscr();
        switch(op)
        {
            case'+':c=a+b;
            {   
                printf("addition of %f & %f =%f",a,b,c);
            }
            break;
            case'-':c=a-b;
            {
                printf("subtraction of %f & %f =%f",a,b,c);
            }
            break;
            case'*':(c=a*b);
            {
                printf("multipalication of %f & %f =%f",a,b,c);
            }
            break;            
            case'/':(c=a/b);
            {
                printf("division of %f & %f =%f\n",a,b,c);
            }
        
            break;
            default:
            {
            printf("invalit operter");
            }
           
        }
        getch();
    }  
}