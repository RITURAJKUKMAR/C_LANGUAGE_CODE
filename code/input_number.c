#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *i,*o,*e; 
    int a[100],j,n;    
    i=fopen("INPUT.txt","w");
    if(i==NULL)
    {
        printf("INPUT file is not open\n");
        exit(1);
    }
    printf("Enter number of series\n");
    scanf("%d",&n);
    printf("Enter a number series\n");
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    fclose(i);
    i=fopen("INPUT.txt","r");
    for(j=0;j<n;j++)
    {
        fscanf(i,"%d",a[j]);
    }
    o=fopen("ODD.txt","w");
    e=fopen("EVEN.txt","w");
    for(j=0;j<n;j++)
    {
        if(a[j]%2==1)
            fprintf(o," %d",a[j]);
        else
            fprintf(e," %d",a[j]);
    }
    printf("ODD file =");
    for(j=0;j<n;j++)
    {
        if(a[j]%2==1)
        {
            fscanf(o,"%d",a[j]);
            printf(" %d",a[j]);
        }       
    }
    printf("\nEVEN file =");
    for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            fscanf(e,"%d",a[j]);
            printf(" %d",a[j]);
        }      
    }
    fclose(i);
    fclose(e);
    fclose(o);
    getch();
}