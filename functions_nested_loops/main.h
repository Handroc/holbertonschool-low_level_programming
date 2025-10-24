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
/**
 * _abs - return the absolute value of a number
 * @n: number to be checked
 *
 * Return: n if the number is positive, -n if it's negative
 */
int _abs(int n);
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n);
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59.
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void);

#endif
