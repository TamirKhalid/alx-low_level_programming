#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Assigns a random number to the variable n each time
 * it is executed. Complete the source code in order to print the last
 * digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10; // get the last digit of n
printf("Last digit of %d is %d ", n, last);
if (last > 5)
{
printf("and is greater than 5\n");
}
else if (last == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
