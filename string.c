/*To perform string function*/
#include <stdio.h>
#include <string.h>

void main()
{

	char st[] = "This is an example";
	char ch = 'a';
	char* val;

	val = strrchr(st, ch);

	printf("\nString after last %c is : %s \n", ch, val);

	char ch2 = 'm';

	val = strrchr(st, ch2);

	printf("\nString after last %c is : %s \n", ch2, val);
}
