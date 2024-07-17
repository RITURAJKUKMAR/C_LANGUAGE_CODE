#include<stdio.h>
void main()
{
    int i,j,b=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0)
            {
                b++;
                break;
            }
        }
        break;
    }
    printf("%d",b);
}