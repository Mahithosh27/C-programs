#include <stdio.h>
#include <windows.h>
void main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("*");
//             Sleep(200);
//         }
//         printf("\n");
//     }
// }

// void printTriangle(int n)
// {
//     int i, j;

//     // Outer loop for number of rows
//     for (i = 1; i <= n; i++)
//     {
//         // Inner loop for printing spaces
//         for (j = 0; j < n-i; j++)
//         {
//             printf(" ");
//             // Sleep(200);
//         }

//         // Inner loop for printing stars
//         for (j = 0; j < 2 * i - 1; j++)
//         {
//             printf("%c",65+j);
//             // Sleep(200);
//         }

//         // Move to the next line after each row
//         printf("\n");
//     }
// }


// int main()
// {
//     int rows;

//     // Input the number of rows for the triangle
//     printf("Enter the number of rows for the triangle: ");
//     scanf("%d", &rows);

//     // Call the function to print the triangle
//     printTriangle(rows);

//     return 0;
// }

// C program to print right half pyramid pattern of number
// #include <stdio.h>

// int main()
// {
// 	int rows = 5;

// 	// first loop for printing rows
// 	for (int i = 0; i < rows; i++) {
// 		// second loop for printing number in each rows
// 		for (int j = 0; j <= i; j++) {
// 			printf("%d ", j + 1);
//             Sleep(400);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// hallow square
// #include <stdio.h>

// int main() {
//     int row;
//     printf("Enter the number of rows: ");
//     scanf("%d", &row);

//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < row; j++) {
//             // Use '==' for comparison instead of '='
//             if (i == 0 || i == row-1 || j == 0 || j == row -1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// right angle triangle
// #include <stdio.h>
// void main()
// {
//   int row = 10;
//   for(int i= 0;i<row;i++){
//     for(int j=0;j<=i;j++)
//      {
//         printf("* ");
//      }
//      printf("\n");
//   }

// }




// left angle triangle
// #include <stdio.h>
// void main()
// {
//     int row = 10;
//     for (int i = 1; i < row; i++)
//     {
//         for (int j = 0; j < row - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k < i ; k++)
//         {
//             printf("%d",k+1);
//         }
//         printf("\n");
//     }
// }
/// hallow triangle pattern
// #include<stdio.h>
// void main(){
//     int row= 10;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<=i;j++){
//              if(i==0||i==row-1||j==0||j==i)
//                { printf("*");}
//                 else{
//                  printf(" ");
//             }
//             }printf("\n");
//         }
        
//     }
//  HOURGLASS
// #include<stdio.h>
// void main()
// {
//  int row = 10;
//  for(int i=0;i<row;i++){
//     for(int k=0;k<i;k++){
//         printf(" ");
//     }
//     for(int j=0;j<row-i;j++){
//         printf("*");
//     }
//     for(int m=0;m<row-i;m++){
//         printf("*");
//     }
//     printf("\n");
//  }
//  for(int n=1;n<row;n++)
//  {
//     for(int o=0;o<row-n;o++)
//     {
//         printf(" ");
//     }
//     for(int p=0;p<2*n;p++){
//         printf("*");
//     }
//     printf("\n");
//  }
// }

