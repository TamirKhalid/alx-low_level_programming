#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the size of various types
 *
 * Return: 0 on success
 */
int main(void)
{
/* Declare variables of different types */
int intType;
float floatType;
double doubleType;
char charType;
/* Use sizeof operator to get the size of each type in bytes */
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
printf("Size of a double: %zu byte(s)\n", sizeof(doubleType));
/* Return 0 to indicate success */
return (0);
}
