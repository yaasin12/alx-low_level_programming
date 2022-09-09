#include <stdio.h>

/**
 * main : this is the main function
 *
 * Description: print alphabet in lowercase and then in uppercase
 *
 * Return : 0 (success)
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
