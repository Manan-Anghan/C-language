#include<stdio.h>
#include<conio.h>

main()

{
  int i=1,a;
  clrscr();
  printf("enter the number :");
  scanf("%d",&a);

  do
  {
     printf("%d * %d=%d\n",i,a,i*a);
     i++;
  }
  while(i<=10);
  getch();
}