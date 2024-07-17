#include<stdio.h>
#include<conio.h>
int main()
{
    int i,l,*p;
    char k,s[20]={"raj"};
    for(l=0;*(p+l)!='\0';l++)
    {
        for(i=0;i<l/2;i++)
        {
            k=*(p+i);
            *(p+i)=*(p+l-i-1);
            *(p+l-i-1)=k;
        }
    }
    printf("%s",*p);
    getch();
}