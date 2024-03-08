#include <stdio.h>
int len(char str[])
{
    int i=0, count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
void concate(char str1[],char str2[],int len){
    int i=0;
    while ( str2[i]='\0')
    {
        str1[len+i]=str2[i];
        i++;
    }
    
}


void main()
{
    char string1[100], string2[100];
    printf("enter the string\n");
    scanf("%s", string1);
    scanf("%s", string2);
    int l1 = len(string1);
    printf("%d\n",l1);
}