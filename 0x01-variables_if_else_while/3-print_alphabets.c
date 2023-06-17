#include<stdio.h>
/**
 *main - Displaying lowercase and then uppercase alphabets
 *
 * Return: 0(Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0, i < 52, i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}

