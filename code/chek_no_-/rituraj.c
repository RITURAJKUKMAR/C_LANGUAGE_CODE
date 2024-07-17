#include<stdio.h>
#include<conio.h>
int main()
{
  auto int x=10;
  {
   auto int x=20;
   {
    auto int x=30;
    printf("%d\n",x);
   }
   printf("%d\n",x);
  }
  printf("%d\n",x);
getch();
return 0;
}
