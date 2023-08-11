#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c); // print the current letter
c++; // increment c to the next letter
}
c = 'A'; // initialize c with the first letter of the uppercase alphabet
while (c <= 'Z')
