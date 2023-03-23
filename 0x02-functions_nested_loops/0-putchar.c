#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int main(void);

#endif /* MAIN_H */

#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

/**
 * _putchar - Writes a character to stdout
 *
 * @c: The character to be written
 *
 * Return: On success, return the number of characters written. On error,
 * return -1 and set errno appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}


