// #include <stdio.h>
// int main()
// {
//   int array[] = {12,12,12,12,12};

//   int len = sizeof(array) / sizeof(int);
//   int outarray[100];

//   for (int i = 0; i <= len; i++)
//   {
//     outarray[i] = sumof(array[i]);
//     printf("%d\n",outarray[i]);
//   }
//  // printf("%d",outarray);
//   printf("the output\n");
//   int t = 0;
//   for (int i = 0; i < len; i++)
//   {
//     t += outarray[i];
//   printf("the total %d", t);
// }

// int sumof(int n)
// {
//   int sum = 0;
//   while (n > 0)
//   {
//     sum += n % 10;
//     n /= 10;
//   }
//   return sum;

// }
// }
// recursion function

#include <stdio.h>

int rec(int num);

int main()
{
  int num = 143;
  int r = rec(num);
  printf("the sum of number %d", r);
  return 0;
}

int rec(int num)  
{
  int sum = 0;
  if (num == 0)
    return 0;
  else                     
  {
    sum += num % 10;
    num /= 10;
    return sum + rec(num);
  }

  if (sum > 10)
  {
    return rec(sum);
  }
  else
  {

    return sum;
  }
}
