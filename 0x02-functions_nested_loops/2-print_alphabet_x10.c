#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/
void print_alphabet_x10(void)
{
int counting = 0;
char alphabet;
while (counting++ <= 9)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
}
