#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*TASK 0*/
	/*simple one*/
	printf("\n\nCheck beginning\n");
	
	/*print char*/
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	printf("\n\nprint check checker for C\n");
	_printf("%c", 'S');
	printf("%c", 'S');

	_printf("\nA char inside a sentence: %c. Did it work?\n", 'F');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	
	_printf("\nLet'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	

	/*print string*/
	printf("\n\ncheck for S\n");

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	printf("\ncheck checker for S\n");
	_printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%s", "This sentence is retrieved from va_args!\n\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n\n", (char *)0);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	/*test for %*/
	printf("\n\ncheck for %\n");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

	printf("\n\ncheck checker for %\n");
	_printf("%%");
	printf("%%");
	_printf("\nShould print a single percent sign: %%\n");
	_printf("Should print a single percent sign: %%\n");
	/*exclude*/

	return (0);
}
