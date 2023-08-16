#include <stdio.h>

int main(void)
{
char *str = "_putchar";
for (int i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
