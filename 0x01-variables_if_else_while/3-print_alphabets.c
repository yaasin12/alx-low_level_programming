#include <stdio.h>

/**
 * Main : main block
 * Description: print alphabet in lowercase and then in uppercase
 * return : 0 (success)
 */

int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	/*prints a - z*/
	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}

	/*print A - Z*/
	while (ALP <= 'Z')
	{
		putchar(ALP);
		++ALP;
	}
	putchar('\n');

	return (0);
}