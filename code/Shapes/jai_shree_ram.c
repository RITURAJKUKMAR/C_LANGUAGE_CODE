/*
            RAMRAM      RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAMRAMRAMRAM
            RAMRAM      RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAMRAMRAMRAM
            RAMRAM      RAMRAM      RAMRAM               RAMRAM
            RAMRAM      RAMRAM      RAMRAM               RAMRAM
            RAMRAM      RAMRAM      RAMRAM               RAMRAM
            RAMRAM      RAMRAMRAMRAMRAMRAM               RAMRAM
RAMRAM      RAMRAM      RAMRAM      RAMRAM               RAMRAM
RAMRAM      RAMRAM      RAMRAM      RAMRAM               RAMRAM
RAMRAM      RAMRAM      RAMRAM      RAMRAM               RAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAM      RAMRAM      RAMRAMRAMRAMRAMRAMRAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAM      RAMRAM      RAMRAMRAMRAMRAMRAMRAMRAM


RAMRAMRAMRAMRAMRAM      RAMRAM      RAMRAM      RAMRAMRAMRAMRAMRAM         RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAM      RAMRAM      RAMRAMRAMRAMRAMRAM         RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAM
RAMRAM                  RAMRAM      RAMRAM      RAMRAM      RAMRAM         RAMRAM                  RAMRAM
RAMRAM                  RAMRAM      RAMRAM      RAMRAM      RAMRAM         RAMRAM                  RAMRAM
RAMRAM                  RAMRAM      RAMRAM      RAMRAM      RAMRAM         RAMRAM                  RAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAMRAM         RAMRAMRAMRAMRAM         RAMRAMRAMRAM   
            RAMRAM      RAMRAM      RAMRAM      RAMRAMRAM                  RAMRAM                  RAMRAM
            RAMRAM      RAMRAM      RAMRAM      RAMRAM   RAM               RAMRAM                  RAMRAM
            RAMRAM      RAMRAM      RAMRAM      RAMRAM      RAM            RAMRAM                  RAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAM      RAMRAM      RAMRAM         RAM         RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAM      RAMRAM      RAMRAM            RAM      RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAM


RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAMRAM      RAMRAM                  RAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAMRAM      RAMRAMRAM            RAMRAMRAM
RAMRAM      RAMRAM      RAMRAM      RAMRAM      RAMRAM   RAM      RAM   RAMRAM
RAMRAM      RAMRAM      RAMRAM      RAMRAM      RAMRAM      RAMRAM      RAMRAM
RAMRAM      RAMRAM      RAMRAM      RAMRAM      RAMRAM                  RAMRAM
RAMRAMRAMRAMRAMRAM      RAMRAMRAMRAMRAMRAM      RAMRAM                  RAMRAM
RAMRAMRAM               RAMRAM      RAMRAM      RAMRAM                  RAMRAM
RAMRAM   RAM            RAMRAM      RAMRAM      RAMRAM                  RAMRAM
RAMRAM      RAM         RAMRAM      RAMRAM      RAMRAM                  RAMRAM
RAMRAM         RAM      RAMRAM      RAMRAM      RAMRAM                  RAMRAM
RAMRAM            RAM   RAMRAM      RAMRAM      RAMRAM                  RAMRAM

*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int JAI();
int SHREE();
int RAM();
int main()
{
    system("color 8");
    JAI();
    SHREE();
    RAM();
    getch();
}
int JAI()
{
    int i,j,k,r,s,l,n,m,a,b,c,d;
    for(i=1;i<=11;i++)
    {
        i>6?(k=1,r=2):(k=5);
        i>9?(s=3,l=4):(s=5);
        (i<3||i==6)?(n=11,m=12):(m=10,n=10);
        for(j=1;j<=24;j++)
        {
            (j>16)?(a=1,b=2):(b=0,0);
            (j>16)?(c=10,d=11):(c=0,d=0);
            if((j==5||j==6)||(j==9||j==10||j==13||j==14)||j==20||j==21||(j==k||j==r||j==s||j==l)||(j==n||j==m)||(i==a||i==b)||(i==c||i==d))
                printf("RAM");
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");
}
int SHREE()
{
    int i,j,a,b,c,d,e,f,n,m,g,h,l,k,o,p,q,r,s,t,u,v,w,x,y,z,av,aw,az,ax,ay;
    for(i=1;i<=11;i++)
    {
        (i==6)?(n=11,m=12):(m=10,n=10);
        (i==6)?(e=3,f=4):(e=10,f=10);
        (i<7)?(a=1,b=2):(a=0,b=0);
        (i>5)?(c=5,d=6):(c=0,d=0);
        (i<7)?(q=21,r=22):(q=0,r=0);
        i>6?u=12:(u=100);
        for(j=1;j<=38;j++)
        {
            j<7?(g=1,h=2):(g=0,h=0);
            j<7?(l=10,k=11):(l=0,k=0);
            (j>17&&j<=22)?(o=1,p=2):(o=0,p=0);
            (j>17&&j<=22)?(s=6):(s=0);
            (j>25&&j<32)?(v=1,w=2):(v=0,w=0);
            (j>25&&j<31)?(z=6):(z=0);
            (j>25&&j<32)?(x=10,y=11):(x=0,y=0);
            (j>33)?(av=1,aw=2):(av=0,aw=0);
            (j>33&&j<38)?(az=6):(az=0);
            (j>33)?(ax=10,ay=11):(ax=0,ay=0);
            if((j==9||j==10||j==13||j==14)||(j==n||j==m)||j==a||j==b||(j==c||j==d)||(j==e||j==f)||(i==g||i==h||i==l||i==k)||(i==o||i==p||j==17||j==18||j==q||j==r||i==s||j==u+i)||(j==26||j==27||i==v||i==w||i==x||i==y||i==z)||(j==34||j==35||i==av||i==aw||i==ax||i==ay||i==az))
                printf("RAM");
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");
}
int RAM()
{
    int i,j,a,b,c,o,p,q,r,s,u,k;
    for(i=1;i<=11;i++)
    {
        (i<7)?(q=5,r=6):(q=0,r=0);        
        for(j=1;j<=26;j++)
        {
            (j>1&&j<=6)?(s=6):(s=0);
            (j>=1&&j<=6)?(o=1,p=2):(o=0,p=0);
            (j>=9&&j<=14)?(a=1,b=2):(a=0,b=0);
            (j>9&&j<=14)?(u=6):(u=0);
            (j>17&&j<22)?(k=j):(k=0);
            (j>21&&j<26)?(c=j):(c=0);
            if((i==o||i==p||j==1||j==2||j==q||j==r||i==s||j==i-4)||(j==9||j==10||j==13||j==14||i==a||i==b||i==u)||(j==17||j==18||j==25||j==26||(k==17+i||c==26-i)))
                printf("RAM");
            else
                printf("   ");
        }
        printf("\n");
    }
}