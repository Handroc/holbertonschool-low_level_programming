#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c);
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: On success 1.
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);
/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c);
/**
 * print_sign - checks whether a number is positive, negative or null
 * @c: character to be checked
 *
 * Return: 1 if c is positive, 0 if c is null or -1 if c is negative
 */
int print_sign(int c);

#endif
