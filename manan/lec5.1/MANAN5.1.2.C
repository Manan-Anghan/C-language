#include<stdio.h>
#include<conio.h>

main()

{
   char a;
   clrscr();
   printf("enter the character of alphabet :");
   scanf("%c",&a);

   if(a>=65 && a<=90)
   {
      printf("the character is capital alphabet ...");
   }
   else if (a>=97 && a<=122)
   {
      printf("the character is small alphabet....");
   }
   else if (a>=48 && a<=57)
   {
      printf("the character is natural number....");
   }

   else
   {
      printf("the character is speecial symbol...");
   }
   getch();
}