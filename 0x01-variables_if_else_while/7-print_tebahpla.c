#include<stdio.h>
/**
* main - Printing the lowercase alphabet in reverse order.
*
* Return: Always 0.
*/
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
