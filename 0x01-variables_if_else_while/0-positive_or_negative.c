#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Assigns a random number to the variable n each time
 * it is executed. Complete the source code in order to print whether
 * the number stored in the variable n is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
