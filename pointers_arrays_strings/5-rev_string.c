#include "main.h"

/**
* rev_string - inverse une chaine
*@s: chaine a inverser
*/

void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;
while (*end)
end++;
end--;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
