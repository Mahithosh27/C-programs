// #include <stdio.h>
// void str(char *username)
// {
//     while (*username)
//     {
//         if (*username == ' ')
//         {
//             *username = '-';
//         }

//         *username++;
//     }
// }
// void main()
// {
//     char username[100];
//     printf("enter the string");
//     scanf("%[^\n]", username);

//     str(username);
//     printf("%s", username);
// }

// for having original string

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// char *ch(const char *c)
// {
//     char *temp = malloc(strlen(c) + 1);
//     strcpy(temp, c);
//     printf("temp::%s\n", temp);
//     int i = 0;
//     while (temp[i] != '\0')
//     {
//         if (temp[i] == 'a')
//         {
//             temp[i] = 'A';
//         }
//         i++;
//     }
//     temp[i] = '\0';
//     return temp;
// }

// int main()
// {
//     char username[] = "abcd";
//     // char chc[] = username;
//     printf("original:%s\n", username);
//     printf("al:%s\n", ch(username));
//     printf("AA original:%s\n",username);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// char *ch(const char *c)
// {
//     char *temp = malloc(strlen(c) + 1);
//     strcpy(temp, c);
//     printf("temp%s\n", temp);
//     int i = 0;
//     while (temp[i] != 0) // abcd
//     {
//         if (islower(temp[i]))
//         {
//             temp[i] = toupper(temp[i]);
//         }
//         i++;
//     }
//     temp[i] = '\0';
//     return temp;
// }
// int main()
// {
//     char username[] = "abcd";
//     // char chc[] = username;
//     printf("original:%s\n", username);
//     printf("al:%s\n", ch(username));
//     printf("AA original:%s\n", username);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// char *ch(const char *c)
// {
//     char *temp = malloc(strlen(c) + 1);
//     strcpy(temp, c);
//     printf("temp%s\n", temp);
//     int i = 0;
//     while (temp[i] != 0) // abcd
//     {
//         char t = temp[i];
//         temp[i] = temp[i + 1];
//         temp[i + 1] = t;
//         i = i + 2;
//     }
//      temp[i] = '\0';
//     return temp;
// }
// int main()
// {
//     char username[] = "abcd";
//     // char chc[] = username;
//     printf("original:%s\n", username);
//     printf("al:%s\n", ch(username));
//     printf("AA original:%s\n", username);
// }