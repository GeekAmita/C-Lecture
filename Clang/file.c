/*To perform file i/o operations*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   fptr = fopen("/home/ami/Documents/txt.otd","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fscanf(fptr,"%d", &num);

   printf("Value of n=%d\n", num);
   fclose(fptr);

   return 0;
}
