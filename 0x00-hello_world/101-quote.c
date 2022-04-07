#include <stdio.h>

/**
 * main - print to stderr
 *
 * Return: 1 if successfull
 */

int main(void)
{
char muStr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, muStr, 59);
return (1);
}
