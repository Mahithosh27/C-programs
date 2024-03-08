// Different star patterns
#include <stdio.h>
void main()
{
    int row, col;
    printf("\nEnter the number of rows:");
    scanf("%d", &row);
    printf("\nEnter the number of columns:");
    scanf("%d", &col);
    // square pattern
    //   int i =1;
    //   while(i<=row){
    //       int j = 1;
    //       while(j<=row){
    //           printf("*");
    //           j++;
    //       }
    //       i++;
    //       printf("\n");
    //   }

    // Hollow Square Pattern
    // int i = 1;
    // while(i<=row){
    //    int j =1;
    //    while(j<=row){
    //        if(i==1 || i==row){
    //            printf("*");

    //        }
    //        else{
    //            if(j==1||j==row){
    //                printf("*");
    //            }
    //            else{
    //                printf(" ");
    //            }
    //        }
    //        j++;
    //    }
    //    printf("\n");
    //    i++;
    // }

    // Right Triangle Pattern
    //     int i = 1;
    //     while (i <= row)
    //     {
    //         int sp = row - i;
    //         while (sp >= 0)
    //         {
    //             printf(" ");
    //             sp--;
    //         }
    //         int j = 1;
    //         while (j <= i)
    //         {
    //             printf("*");
    //             j++;
    //         }
    //         printf("\n");
    //         i++;
    //     }
    // }
    // Right Down Triangle
    //  int i = 0;
    //  while(i<=row){
    //     int sp = i;
    //     while(sp>=0){
    //         printf(" ");
    //         sp--;
    //     }
    //     int j = row-i;
    //     while(j>=0){
    //         printf("*");
    //         j--;
    //     }
    //     i++;
    //     printf("\n");
    //     }

    // Left Triangle Star Pattern
    //  int i = 1;
    //  while(i<=row){
    //     int j=1;
    //     while(j<=i){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    //  }

    // Left Down Triangle
    //     int i = 0;
    //     while (i <= row)
    //     {
    //         int j = 1;
    //         while (j <= row - i)
    //         {
    //             printf("*");
    //             j++;
    //         }
    //         printf("\n");
    //         i++;
    //     }
    // }

    /// Hollow triangular pattern
//     int i = 1;
//     while (i <= row)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             if (i == 1 || i == row)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 if (j == 1 || j == i)
//                 {
//                     printf("*");
//                 }
//                 else
//                 {
//                     printf(" ");
//                 }
//             }
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
// }

// Hollow Pyramid pattern //doubt
// int i = 0;
// while(i<row){
//
//     int sp = row-i;
//     while(sp>=0){
//         printf(" ");
//         sp--;
//     }
//     int j = 1;
//     while(j<=i){
//         if(i==1 || i== row-1){
//             printf(" * ");
//         }
//         else
//         if(j==1||j==i){
//
//             printf(" * ");
//         }
//         else{
//             printf(" ");
//         }
//         j++;
//     }
//     i++;
//     printf("\n");
// }
// Reverse Pyramind Star Pattern
//  int i = 0;
//  while(i<=row){
//     int sp = i;
//     while(sp>0){
//         printf(" ");
//         sp--;
//     }
//     int j = row-i;
//     while(j>=0){
//         printf("* ");
//         j--;
//     }
//     printf("\n");
//     i++;
//  }

// Hour Glass Pattern
// int i = 0;
//
// while(i<row){
//     int sp=i;
//     while(sp>0){
//         printf(" ");
//         sp--;
//     }
//     int j = row-i;
//     while(j>=0){
//         printf("* ");
//         j--;
//     }
//     i++;
//     printf("\n");
// }
// int i1=2;
// while(i1<=row){
//     int sp1=row-i1;
//     while(sp1>=0){
//         printf(" ");
//         sp1--;
//     }
//     int j1 = 2;
//     while(j1<=i1){
//         printf("* ");
//         j1++;
//     }
//     i1++;
//     printf("\n");
// }

// Diamond Pattern
// int i =1;
// int i1 = 0;
// while(i<=row){
//     int sp=row-i;
//     while(sp>0){
//         sp--;
//         printf(" ");
//     }
// int j = 1;
//     while(j<=i){
// printf("* ");
// j++;
//     }
//     i++;
//     printf("\n");
// }
//
// while(i1<row){
// int sp1=i1;
// while(sp1>0){
//     printf(" ");
//     sp1--;
// }
// int j1 = row-i1;
// while(j1>0){
// printf("* ");
// j1--;
// }
// i1++;
// printf("\n");
// }

////Hollow Triangle
// int i1 = 0;
// while(i1<row){
//     int j1 =1;
//     while(j1<row*2+1){
//         if(j1==i1+row||i1==row-1||j1==row-i1){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//         j1++;
//     }
//     i1++;
//     printf("\n");
// }

//
////Hollow Diamond in a square
// int i1 = 0;
// int tat= 2*row;
//
// while(i1<row){
//     int j1 =1;
//     while(j1<row*2+1){
//         if(j1==i1+row||i1==row-1||j1==row-i1){
//             printf(" ");
//         }
//         else{
//             printf("*");
//         }
//         j1++;
//     }
//     i1++;
//     printf("\n");
// }
//
// int i = row;
// while(i>1){
//     int j =1;
//     while(j<row*2){
//         if(j==i+row||i==row||j==row-i){
//             printf(" ");
//         }
//         else{
//             printf("*");
//         }
//         j++;
//     }
//     i--;
//     printf("\n");
// }

// for(int x =1; x <= row; x++)
// {
// for(int y =1; y <= row; y++)
// {
// if(y <= x)
// printf("%d",y);
// else
// printf(" ");
// }
// for(int y = row; y >= 1;y--)
// {
// if(y <= x)
// printf("%d",y);
// else
// printf(" ");
// }
// printf("\n");
// }

// Diamond Pattern
//  int i =0;
//  while(i<=row/2){
//     int sp=row/2-i;
//     while(sp>=0){
//         sp--;
//         printf(" ");
//     }
//  int j =1,j2=0;
//     while(j<=i){
//  printf("* ");
//  j++;
//     }
//     i++;
//     printf("\n");}

// int j1=0;
// while(j1<=row/2){
//     int sp1=j1;
//     while(sp1>0){
//         sp1--;
//         printf(" ");
//     }
// int k1=row/2-j1;
// while(k1>=0){
//     k1--;
//     printf("* ");

// }
// j1++;

// printf("\n");

// }

// Border Diamond
// int i1 = 0;
// int tat= 2*row;
//
// while(i1<row){
//     int j1 =1;
//     while(j1<=row*2+1){
//         if(j1==i1+row||j1==row-i1){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//         j1++;
//     }
//     i1++;
//     printf("\n");
// }
//
// int i = row;
// while(i>0){
//     int j =1;
//     while(j<=row*2+1){
//         if(j==i+row||j==row-i){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//         j++;
//     }
//     i--;
//     printf("\n");
// }

// Right Pascal Triangle
// int i = 1;
// while (i <= row * 2 - 1)
// {

//     if (i < 2 * row / 2)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             printf("*");
//             j++;
//         }
//     }
//     else
//     {
//         if (i >= 2 * row / 2)
//         {
//             int k = 2 * row - i;
//             while (k >= 1)
//             {
//                 printf("*");
//                 k--;
//             }
//         }
//     }
//     i++;
//     printf("\n");
// }
// }

// Left Side Pascals Triangle
// int i=1;
// while(i<=row){
//     int sp = row-i;
//     while(sp>0){
//         sp--;
//         printf(" ");
//     }
//    int j =1;
//    while(j<=i){
//     printf("*");
//     j++;
//    }
//    i++;
//    printf("\n");
//     }
//  int i1=1;
// while(i1<=row-1){
//     int sp1 = i1;
//     while(sp1>0){
//         sp1--;
//         printf(" ");
//     }
//    int j1=row-i1;
//    while(j1>0){
//     printf("*");
//     j1--;
//    }
//    i1++;
//    printf("\n");
//     }

////X Symbol
// int i=1;
// while(i<=2*row){
//     int j =0;
//     while(j<i){
//         if(i==2*j+1||){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//         j++;
//     }
//     i++;
//     printf("\n");
// }

// int i =0,coeff=1;
// int temp = row;
// while(i<row){
//     int sp=row-i;
//     while(sp>0){
//         sp--;
//         printf("  ");
//     }
//     int j=0;
//     while(j<2*i+1){
//         if(i==0||j==0||j==2*i){
//             printf(" %d",i+1);
//         }
//         else if(i==j){
//            printf(" %d",2*i+1);
//         }
//         else if(i==row-1 && j<row){
//             temp++;
//              printf(" %d",temp);

//         }
//         else if(i==row-1 && j>=row){

//              printf(" %d",temp);
//               temp--;

//         }

//         // else if(i%2 && j%3){
//         //     printf(" %d",i-j+1);
//         // }
//         else printf(" *");

//         j++;
//     }
//     i++;
//     printf("\n");
// }
// }
