// 26.11.2020 and finished 27.11.2020 - I got the answer from the internet (a Python' answer)

#include <stdio.h>
int main(void)
{
   int rows = 10;
   int number = 1;

   puts("Floyd's Triangle");
   int i = 1;
   while (i <= rows)
   {
      int j = 1;
      while (j <= i)
      {
         printf("%d ", number);
         number = number + 1;
         j = j + 1;
      }
      i = i + 1;
      printf("\n");
   }
}
