/*To check if a year is leap year or not*/
#include <stdio.h>

int main() 
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("\n%d is a leap year.\n", year);
   }
   
   else if (year % 100 == 0) {
      printf("\n%d is not a leap year.\n", year);
   }
   
   else if (year % 4 == 0) {
      printf("\n%d is a leap year.\n", year);
   }
   
   else {
      printf("\n%d is not a leap year.\n", year);
   }

   return 0;
}