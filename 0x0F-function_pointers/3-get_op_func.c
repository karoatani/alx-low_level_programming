#include "3-calc.h"
#include "stdio.h"
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

int (*get_op_func(char *s))(int, int)
{
 /*
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

*/
    while (i < 7)
    {
        if (*s == ops->op[i])
        {
            break;
        }
        i++;
    }
    return ops[i/2].f;
    
}
