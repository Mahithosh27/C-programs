#include <stdio.h>
#include "lib.c"
#include <stdbool.h>
void main()
{

   // int num;
   // printf("enter the number");
   // scanf("%d", &num);
   // even(num);
   // int num1;
   // printf("enter the number");
   // scanf("%d", &num1);
   // int i = 0;
   // while (num1 != 0)
   // {
   //     for (i = 0; i < 10; i++)
   //     {

   //         printf("%d x %d = %d\n", num1, i, num1 * i);
   //     }
   //     printf("enter the number");
   //     scanf("%d", &num1);
   // 


   while(true) {
   int a, b, op;
   printf("enter the opertion\n 1.add\n 2.sub\n3.mul\n4.div\n5 exit");
   scanf("%d", &op);
   printf("\nenter the numbers\n");
   scanf("%d %d", &a, &b);
   switch (op)
   {
   case 1:
      add(a, b);
      break;
   case 2:
      sub(a, b);
      break;

   case 3:
      mul(a, b);
      break;
   case 4:
      div(a, b);
      break;
   default:
   }
if(op==6){
   break;
}
}
}