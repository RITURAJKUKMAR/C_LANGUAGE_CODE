#include<stdio.h>
#include<conio.h>
int main()
{
    int x=0,i,b=0;
    for(i=0;i<100;i++)
    {
        b>0?x=76:x;        
        if(x>25&&x<76)
        {
            printf("you struggle a lot\n");
            continue;
        }
        else if(x==0)
        {
            printf("Enter your life stugle(%%)\n");
            scanf("%d",&x);
        }
        else if(x>75)
        {
            printf("your job is fixed in 2028\n");
            b++;
            if(b>=2)
            {
                printf("There will be a lot of happiness in your life.\n");
            }
        }
        else if(x<26)
        {
            printf("your life is end.\n");
            break;
        }
    }
    getch();
}