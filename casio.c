#include <stdio.h>

int main() {
   int a;
   int b;
   int ch;
   char choice;
   do
   {
    printf("Enter 1st Number :");
    scanf("%d: \n", &a);
    printf("Enter 2nd Number :");
    scanf("%d: \n", &b);
    printf("\n Press 1 Addition : %d + %d", a,b);
     printf("\n Press 2 Subtraction : %d - %d", a,b);
      printf("\n Press 3 Multiplication : %d * %d", a,b);
      printf(" \n Enter your choice :");
      scanf("%d: \n", &ch);
      switch(ch)
      {
          case 1: printf("%d \n", a+b);
          break;
          case 2: printf("%d \n", a-b);
          break;
          case 3: printf("%d \n", a*b);
          break;
          default : printf("Invalid Input !");
          break;
      }
          printf("Continue (Y/N) :");
          scanf("%c: \n", &choice);
   }
          while(choice='Y');
   
          return 0;
          
      }
    