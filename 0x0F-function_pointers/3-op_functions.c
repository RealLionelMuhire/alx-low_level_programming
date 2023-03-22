#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds a nd b
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a and b
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a and b
 * @a: first number
 * @b: second number
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - obtains the modulo of a and b
 * @a: first number
 * @b: second number
 * Return: modulo of a to b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
