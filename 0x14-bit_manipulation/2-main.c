#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(10, 0);
    printf("%d\n", n);
    n = get_bit(10, 1);
    printf("%d\n", n);
    n = get_bit(10, 2);
    printf("%d\n", n);
    n = get_bit(13, 3);
    printf("%d\n", n);
    n = get_bit(42, 5);
    printf("%d\n", n);
    n = get_bit(15, 1);
    printf("%d\n", n);
    n = get_bit(15, 0);
    printf("%d\n", n);
    n = get_bit(15, 3);
    printf("%d\n", n);
    n = get_bit(0, 0);
    printf("%d\n", n);
    n = get_bit(0, 5);
    printf("%d\n", n);
    n = get_bit(16, 4);
    printf("%d\n", n);
    return (0);
}
