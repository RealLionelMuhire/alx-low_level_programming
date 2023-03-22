#ifndef CALC_H
#define CALC_H

/**
 * struct op - structure of operation and pointer to the function needed
 * @op: operation to be performed
 * @f: pointer that points to a fuction
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b)
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
