#include <stdio.h>
#include <string.h>
void main()
{
    char user[90];
    char pass[90];
    char username[90] = {"mahithosh"};
    char password[90] = {"12345678"};
    printf("enter the user name\n");
    scanf("%s", &user);

    printf("enter the password\n");
    scanf("%s", &pass);

    if( (strcmp(username, user)== 0  && strcmp(password, pass)==0))
    {
        printf("login");
    }
    else
    {
        printf("wrong password");
    }
}
// {
// {
//   char username[100], name[100];
//   printf("enter the name");
//   scanf(" %[^\n]", username);
//   printf("%s", username);
// }

// {

//   char string1[100], string2[100];
//   printf("enter the name");
//   scanf(" %s", string1);
//   printf("%s", string2);
//   int result = strcmp(string1, string2);

//   if (result == 0)
//   {
//     printf("Strings are equal.\n");
//   }
//   else if (result < 0)
//   {
//     printf("String 1 is less than String 2.\n");
//   }
//   else
//   {
//     printf("String 1 is greater than String 2.\n");
//   }
// }
// int strcmp(const char *str1, const char *str2)
// {
//   while (*str1 != '\0' && *str2 != '\0')
//   {
//     if (*str1 != *str2)
//     {
//       return (*str1 - *str2);
//     }
//     str1++;
//     str2++;
//   }

//   return (*str1 - *str2);
// }
