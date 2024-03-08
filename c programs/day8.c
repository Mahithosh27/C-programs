// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void removecommon(char str1[], char str2[])
// {
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);
//     for (int i = 0; i < len1; i++)
//     {
//         for (int j = 0; j < len2; j++)
//         {
//             if (str1[i] == str2[j])
//             {
//                 str1[i] = ' ';
//                 str2[j] = ' ';
//                 break;
//             }
//         }
//     }
// }
// int count(char str[])
// {
//     int count = 0;
//     int len3 = strlen(str);
//     for (int i = 0; i < len3; i++)
//     {
//         if (str[i] != ' ')
//             count++;
//     }

//     return count;
// }
// char *determine(int count)
// {
//     char *r = malloc(100);
//     switch (count % 6)
//     {
//     case 1:
//         strcpy(r, "friends");
//         break;
//     case 2:
//         strcpy(r, "love");
//         break;
//     case 3:
//         strcpy(r, "Affection");
//         break;
//     case 4:
//         strcpy(r, "Marriage");
//         break;
//     case 5:
//         strcpy(r, "Enemies");
//         break;
//     case 6:
//         strcpy(r, "siblings");
//         break;
//     default:
//         strcpy(r, "non");
//         break;
//     }
//     return r;
// }

// void main()
// {

//     char name1[100];
//     char name2[100];
//     printf("enter the name1 :");
//     scanf("%99s", name1);
//     printf("enter the name2 :");
//     scanf("%99s", name2);

//     removecommon(name1, name2);
//     int remainingcount = count(name1) + count(name2);
//     printf("count=%d\n", remainingcount);
//     char *d = determine(remainingcount);
//     printf("flames------%s\n", d);
// }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeCommon(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                str1[i] = ' ';
                str2[j] = ' ';
                break;
            }
        }
    }
}

int countRemainingLetters(char str[]) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            count++;
        }
    }

    return count;
}

char determineRelationship(int count) {
    char relationship;

    switch (count % 6) {
        case 1: relationship = 'F'; break;  // Friends
        case 2: relationship = 'L'; break;  // Love
        case 3: relationship = 'A'; break;  // Affection
        case 4: relationship = 'M'; break;  // Marriage
        case 5: relationship = 'E'; break;  // Enemies
        case 0: relationship = 'S'; break;  // Siblings
    }

    return relationship;
}

int main() {
    char name1[100], name2[100];

    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);

    // Convert names to uppercase for case-insensitivity
    for (int i = 0; name1[i]; i++) {
        name1[i] = toupper(name1[i]);
    }
    for (int i = 0; name2[i]; i++) {
        name2[i] = toupper(name2[i]);
    }

    // Remove common letters
    removeCommon(name1, name2);

    // Count remaining letters
    int remainingLetters = countRemainingLetters(name1) + countRemainingLetters(name2);

    // Determine relationship
    char relationship = determineRelationship(remainingLetters);

    // Output the result
    switch (relationship) {
        case 'F': printf("Friends\n"); break;
        case 'L': printf("Love\n"); break;
        case 'A': printf("Affection\n"); break;
        case 'M': printf("Marriage\n"); break;
        case 'E': printf("Enemies\n"); break;
        case 'S': printf("Siblings\n"); break;
    }

    return 0;
}
