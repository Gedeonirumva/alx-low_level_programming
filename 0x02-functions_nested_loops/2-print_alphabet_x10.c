#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet x10
 */

void print_alphabet_x10(void)
{
int b;
int b2;

for (b = 0; b <= 9; b++)
{
for (b2 = 'a'; b2 <= 'z'; b2++)
{
_putchar(b2);
																	}
_putchar('\n');
}
}
