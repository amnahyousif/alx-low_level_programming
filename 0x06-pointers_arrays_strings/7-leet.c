#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
char a[] = "aeotlAEOTL";
char b[] = "4307143071";
int i = 0;
int j;
while (*(s + i) != '\0')
{
for (j = 0; j <= 9; j++)
{
if (*(s + i) == a[j])
{
*(s + i) = b[j];
}
}
i++;
}
return (s);
}
