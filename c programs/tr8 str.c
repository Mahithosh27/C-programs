#include <stdio.h>
#include <string.h>
#define N 256
#define size 26

int len(char arr[N])
{
    int i = 0;
    int count = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

// void concat(char c1[N], char c2[N], int l1, int l2){
//     int i =0;
//     while(c2[i]!='\0'){
//         c1[l1+i]=c2[i];
//         i++;

//     }
//     printf("\n The concatinated string is %s",c1);
// }

// int comp(char cmp1[],char cmp2[]){
//     int i=0;

//     while((cmp1[i]!='\0' && cmp2[i]!='\0')){
//         if(cmp1[i]!=cmp2[i]){
//              return cmp1[i]-cmp2[i];

//         }

//         i++;

//     }
// return 0;
//     }

// void reverse(char rev[], int len){
// char t;
// int j = len-1,i=0;
// if(i<j){
//     t=rev[i];
//     rev[i]=rev[j];
//     rev[j]=t;
//     i++;
//     j--;
// }

//    printf("\n String after reversing :%s",rev);
// }

// void palindrome(char pal[], int len){
// char rev[N];
// int flag=0;
// for(int i=0;i<len;i++){
// rev[i]=pal[len-i-1];
// }
// rev[len]='\0';
// printf("\n String before reversing :%s",pal);
// printf("\n String after reversing :%s",rev);
// for(int i=0;i<len;i++){
// if(pal[i]==rev[i]){
//     flag=1;
// }
// }
// if(flag==1){
//     printf("\nPalindrome");
// }
// else printf("\n Not a palindrome");

// }

// void case_conversion(char c[], int len){
//     int i =0;
//     while(i<len){
//     if(c[i]>='a' && c[i]<='z'){
//         c[i]=c[i]-32;
//     }
//     else{
//    if(c[i]>='A' && c[i]<='Z'){
//         c[i]=c[i]+32;
//     }
//     }
//     i++;
//     }

//     printf("\n%s",c);
// }

// int String_anagram(char str1[], char str2[], int len)
// {
//     int count1[N] = {0}, count2[N] = {0};
//     int i = 0;
//     while (str1[i] != '\0' && str2[i] != '\0')
//     {

//         count1[str1[i]]++;
//         count2[str2[i]]++;
//         i++;
//     }
//     for (int j = 0; j < N; j++)
//     {
//         if (count1[j] == count2[j])
//         {
//             return 1;
//         }
//     }
// }

// int char_to_num(char s[]){
// int result=0;
// int i =0 ;

//        for (; s[i] != '\0'; i++) {
//         if (s[i] >= '0' && s[i] <= '9') {
//             result = result * 10 + (s[i] - '0');
//         }
//     }

// return result;

// }

int panagram(char str[])
{
    int count[size] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z')
        {
            int val = c - 'a';
            count[val] = 1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (count[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

// void reverse_str(char str1[]){

//     int i=0,start=0,end=0;

//     while(str1[i]!='\0'){
//         if(str1[i]==' '){
//             end=i-1;
//             while(start<end){
//                 char temp=str1[start];
//                 str1[start]=str1[end];
//                 str1[end]=temp;
//                 start++;
//                 end--;
//             }
//             start=i+1;
//         }
//         i++;
//     }
//     printf("%s",str1);

// }
void main()
{
    // Length of string
    //  char str[ ]="Hey There!";
    //  printf("\n The length of str is : %d", len(str));

    // Concat 2 strings
    //  char str1[N]="Hey There!,";
    //  char str2[N]="How are you ?";
    //  int l1=len(str1);
    //  int l2=len(str2);
    //  concat(str1,str2,l1,l2);

    // Compare 2 strings
    //  char str1[N]="HeyThere";
    //  char str2[N]="Hey";
    //  int l1=len(str1);
    //  int l2=len(str2);
    //  int v = comp(str1,str2);
    //  if(v==0){
    //      printf("\n Both the strings are equal");
    //  }
    //  else  printf("\n Both the strings are not  equal");

    // Reverse of a string
    //    char str1[N]="Hey";
    //    int l1=len(str1);
    //    printf("\n String before reversing :%s",str1);
    //    reverse(str1,l1);

    // Palindrome of a string
    //    char str1[N]="he";
    //    int l1=len(str1);

    //   palindrome(str1,l1);

    // Case conversion
    // char str1[N] = "Heeee";
    // int l1 = len(str1);
    // case_conversion(str1, l1);

    // string to integer;
    //  char str[]={'2','3','4','\0'};
    //  int len=sizeof(str)/sizeof(str[0]);

    // int n = char_to_num(str);
    //  printf("%d",n);

    // char str1[] ="silent";
    // char str2[] = "listen";
    // int len1=sizeof(str1)/sizeof(str1[0]);
    // int len2=sizeof(str2)/sizeof(str2[0]);
    // if(len1==len2){
    //     int n = String_anagram(str1,str2,len1);
    //     if(n==1)
    //     printf("\n The strings  %s %s are anagramic pairs", str1,str2);

    // }
    // else{
    //    printf("\n The strings  %s %s are  not anagramic pairs", str1,str2);
    // }

    // panagram
    char str[] = "The quick brown fox jumps";
    // char str[]="The quick brown fox jumps over the lazy dog.";
    int n = panagram(str);
    if (n == 1)
    {
        printf("\n The string \"%s\" is a panagram", str);
    }
    else
    {
        printf("\n The string \"%s\" is not a  panagram", str);
    }

    // char str[]="The quick brown fox jumps";
    // reverse_str(str);
}
