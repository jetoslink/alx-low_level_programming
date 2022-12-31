#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 * Return: no return
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
