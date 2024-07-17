#include<stdio.h>
#include<conio.h>
#define NAME RITURAJ
int main()
{
    #if NAME==RAJ
        printf("RAJ > HARINDRA SAH");
    #elif NAME==ROHIT
        printf("ROHIT > JAWAHAR PRASAD");
    #elif NAME==RITURAJ
        printf("RITURAJ > SADHU SAH");
    #elif NAME==UDAY
        printf("UDAY > SAHDEV PRASAD");
    #elif NAME==NAVEEN
        printf("NAVEEN > SANJAY PRASAD");
    #else
        printf("invalid name");
    #endif
    getch();
}
//not final