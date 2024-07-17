#include<stdio.h>
#include<conio.h>
int main()
{
    int *p,n,i,j,t;
    printf("Enter araay size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    printf("soted array elements=");
    for(i=0;i<n;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    getch();
}