// 27.11.2020

#include <stdio.h>

int main(void)
{
   puts("Target-Heart-Rate Calculator");

   int year;
   printf("Enter the year of your birth: ");
   scanf("%d", &year);
   int age = 2020 - year;
   printf("Your age is %d", age);
   int max_heart_rate = 220 - age;
   float target50 = max_heart_rate * 0.5;
   float target85 = max_heart_rate * 0.85;
   printf("\nYour maximum heart rate is %d", max_heart_rate);
   printf("\nYour target-heart-rate range is %.2f and %.2f\n", target50, target85);
}