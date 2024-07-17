//13.4_Relational Operator 
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,r,s,t,u,v,w;
    printf("enter the four number\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d);
    r=a==b;
    s=c!=d;
    t=a<d;
    u=b>a;
    v=c<=d;
    w=a>=b;
    printf("Relational EQUAL to operator =%d\n",r);
    printf("Relational NOT EQUAL to operator =%d\n",s);
    printf("Relational LESS THAN to operator =%d\n",t);
    printf("Relational GREATER THAN to operator =%d\n",u);
    printf("Relational LESS THAN EQUAL to operator =%d\n",v);
    printf("Relational GREATER THAN EQUAL to operator =%d\n",w);
    getch();
}