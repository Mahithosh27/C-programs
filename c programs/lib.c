 
 
 
void even(int num){
 
 if(num % 2 == 0 && num>0)
    { 
        printf("positive even ");

    }
    else if(num % 2 == 0 && num<0){
        printf("negative even");
    }
   else if(num % 2 == 1 && num>0){
    printf("positive odd");
   }
   else {
    printf("negative odd");
   }

 }


 int add(int a ,int b){
    printf(" add %d",a+b);
 }
  
 int   sub(int a ,int b){
    printf(" sub %d",a-b);
 }
  int mul(int a ,int b){
    printf(" mul %d",a*b);
 }
 int div(int a ,int b){
    printf(" div %d",a/b);
 }
  



  int strcmp_custom(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }

    // Strings are equal up to the shorter length; check the lengths
    return (*str1 - *str2);
}
