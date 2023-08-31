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

    n = get_bit(1, 100);
    printf("%d\n", n);
    n = get_bit(01101, 3);
    printf("%d\n", n);
    n = get_bit(0, 0);
    printf("%d\n", n);
    return (0);
}
