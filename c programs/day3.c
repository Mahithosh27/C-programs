#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define colour "\x1b[31m"
// int rev(int num)
// {
//     int r = 0;
//     while (num != 0)

//     {
//         r = r * 10 + num % 10;
//         num = num / 10;
//     }
//     printf("reverse number is %d", r);
//     return r;
// }
// void main()
// {
//     int num;
//     printf("enter the number");
//     scanf("%d", &num);
//     int r = rev(num);
//     if (num == r)
//     {
//         printf(" it is palindrome");
//     }
//     else
//     {
//         printf("its not a palindrome");
//     }
// }
// void main()
// // {
// //     char name[] = "mahithosh";
// //     char *p = name;
// //     int size = sizeof(name);
// //   for(int i=0;i<size;i++)
// //    {
// //          printf("%c\n",*p++);
// //             ++++++++++

// //     }

// //     // while loop
// //     printf("%d",size);
// // //     while (*p != '\0')
// // //     {
// // //         printf("%d = %d | %d\n", *p, size);
// // //         printf("%c\n", *p++);
// // //     }
// //  }

// void main()
// {
//     int times = 3;
//     while (times != 0)
//     {
//         printf("enter the password:");
//         char pass[20];
//         scanf("%s", pass);
//         char size = strlen(pass);
//         int hasUpperCase, hasLowerCase, hasDigit, hasSpecialChar, isSpecialCharacter;
//         if (size >= 8)
//         {
//             for (int i = 0; i < size; i++)
//             {
//                 if (isupper(pass[i]))
//                 {
//                     hasUpperCase = 1;
//                 }
//                 else if (islower(pass[i]))
//                 {
//                     hasLowerCase = 1;
//                 }
//                 else if (isdigit(pass[i]))
//                 {
//                     hasDigit = 1;
//                 }
//                 else if (ispunct(pass[i]))
//                 {
//                     hasSpecialChar = 1;
//                 }
//             }
//         }
//         else
//         {
//             printf("enter above 8 char\n");
//         }

//         if (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar)
//         {
//             printf("crct password\n");
//             break;
//         }
//         else
//         {
//             printf("enter atleast one uppercase and lowercase and special charater\n");
//         }
//         times--;
//         printf("try ine more time...:\n");
//     }
//     printf("bye bye try again...;");
// }



void main(){
    printf(colour "hi this is mahithosh" colour);
}