#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    int i;
    char *a;

    a = malloc(sizeof(char) * size);

    if (size == 0)
    {
        return NULL;
    }
    for (i = 0; i < size; i++){
        a[i] = c;
    }

    return a;
}

