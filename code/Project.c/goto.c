#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=1;
    printf("r\n");
    l1:
    printf("RITU ");
    if(n<10)
    {        
        n++;
        goto l1;
    }
}