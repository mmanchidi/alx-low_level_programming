#include "main.h"

int main(void)
{
	int m;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &m;

/**
 * You are not allowed to use the variable a
 * You are not allowed to modify the variable p
 * You can only write one statement
 * You are not allowed to code anything else than this line of code
 */

*(p + 5) = 98;
/* so the line prints 98\n*/
printf("a[2] = %d\n", a[2]);
return (0);
}
