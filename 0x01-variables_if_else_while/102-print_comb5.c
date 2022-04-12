/*
 * File: 102-print_comb5.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
        int num;

        for (num = 00; num <= 99; num++)
        {
                putchar((num % 10) + '0');
                if (num == 99)
                        continue;

                putchar(',');
                putchar(' ');
        }

        putchar('\n');

        return (0);
}
