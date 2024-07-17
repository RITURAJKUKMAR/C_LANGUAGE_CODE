#include<stdio.h>
#include<conio.h>
void main()
{
    int i,s;
    for(i=0;i<=50;i++)
    {
        i<7?s:i;
        s=i;
        printf("%d =%d\n",i,s);
    }
    getch();
}

/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int arr[4][4],i,j,c,t,k;
    arr[1][1]=2;
    arr[1][2]=4;
    arr[1][3]=9;
    arr[1][0]=7;
    arr[2][1]=12;
    arr[2][2]=1;
    arr[2][3]=13;
    arr[2][0]=8;
    arr[3][1]=5;
    arr[3][2]=11;
    arr[3][3]=15;
    arr[3][0]=10;
    arr[4][1]=3;
    arr[4][2]=6;
    arr[4][3]=14;
    arr[4][0]=0;    
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0||i==5)
                printf("--------");
            else 
                printf("| %d\t|",arr[i][j]);
        }
        printf("\n");
    }
    for(k=0;k<4;k++)
    {        
    kbhit();
    c=getch();
    switch(c)
    {
        case 'w':
            for(i=0;i<6;i++)
            {
                for(j=0;j<4;j++)
                {
                    if(arr[i][j]==0)
                    {
                        t=arr[i][j];
                        arr[i][j]=arr[i-1][j];
                        arr[i-1][j]=t;
                        break;
                    }
                }
            }
            break;
    }
    system("cls");
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0||i==5)
                printf("--------");
            else 
                printf("| %d\t|",arr[i][j]);
        }
        printf("\n");
    }
    }
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    printf("RITU");
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
void main()
{
    int x=10;
    printf("x=%d\n",x);
    {
        static int x=30;
        printf("x=%d\nx=%d\n",x,x);
    }
    printf("x=%d\n",x);
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a[4],i,j;
    printf("Enter array elements\n");
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    printf("before shorting\n");
    for(i=0;i<4;i++)
        printf("%d ",a[i]);
    printf("\nafter shortng\n");
    for(i=1;i<4;i++)
    {
        int t=a[i];
        for(j=i-1;j>=0&&t<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=t;
    }
    for(i=0;i<4;i++)
        printf("%d ",a[i]);
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int fun(int);
int main()
{
    int n=4;
    int k=fun(n);
    printf("%d",k);
    getch();
}
int fun(int n)
{
    if(n<=1)
        return 0;
    else
        return(n+fun(n-1));
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,p;
    printf("Enter your marks\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/5;
    if(100>=p&&p>=90)
        printf("A");
    else if(90>p&&p>=80)
            printf("B");
    else if(80>p&&p>=60)
            printf("C");
    else
        printf("D");
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int fun(int*,int*);
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    printf("before A=%d B=%d",a,b);
    fun(&a,&b);
    printf("\nafter A=%d B=%d",a,b);
    getch();
}
int fun(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("\nafter A=%d B=%d",*a,*b);
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("Enter a year\nY= ");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
                printf("leap year");
            else
                printf("not leap year");            
        }
        else
        printf("leap year");
    }
    else
    printf("not leap year");
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,x,s=0;
    printf("erm no.= ");
    for(i=1;i<1000;i++)
    {
        s=0;
        n=i;
        x=n;
        while(0<n)
        {
            int r=n%10;
            s=s+r*r*r;
            n=n/10;
        }
        if(s==x)
            printf("%d ",s);
    }
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,r=1;
    printf("%d",r);
    printf("Enter a number\nN= ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        r=n%i;
        if(r==0)
            break;
    }
    if(r==0)
        printf("not prime number");
    else
        printf("prime number");
    getch();
}*/


/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,m,r,s=0;
    printf("Enter a number\nN=");
    scanf("%d",&n);    
    int x=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(x==s)
        printf("palindrom number");
    else
        printf("not palindrom number");    
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,a[3][3],b[3][3],c[3][3],s;
    printf("Enter 1st array elements\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    printf("\n");
    printf("\nmultiplication\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s=0;
            for(k=0;k<3;k++)
            {
                s=s+a[i][k]*b[k][j];
            }
            c[i][j]=s;
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,l,a[4][4];
    printf("Enter the value of 1st array elements\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    l=a[0][0];
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(l<a[i][j])
                l=a[i][j];
    printf("\nlargest number= %d",l);
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
            printf("largest number= %d",a);
        else
            printf("largest number= %d",c);
    else if(b>c)
            printf("largest number= %d",b);
        else
            printf("largest number= %d",c);
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char o;    
    printf("Enter 1st number= ");
    scanf("%d",&a);
    printf("Enter operater= ");
    fflush(stdin);
    scanf("%c",&o);
    printf("Enter 2nd number= ");
    scanf("%d",&b);
    printf("\n");
    switch(o)
    {
        case'+':
            printf("addition=%d",a+b);
            break;
        case'-':
            printf("subtraction=%d",a-b);
            break;
        case'*':
            printf("multiplication=%d",a*b);
            break;
        case'/':
            printf("division=%d",a/b);
            break;
        case'%':
            printf("modultion=%d",a%b);
            break;
        default:
            printf("invalid operater");
    }
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of triangle sides\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<c||b+c<a||b+c<a)
        printf("triangle is not podible");
    else if(a==b&&b==c&&c==a)
            printf("all sides are equal");
    else if(a==b||b==c||c==a)
            printf("any two sides are equal");
    else
        printf("all sides are not equal");
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,l;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    l=a>b?(a>c?a:c):b>c?b:c;
    printf("Largest number=%d",l);
    getch();
}*/