#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *ptr;
    int lname,lowner,i,j;
    ptr = malloc(sizeof(*ptr));

    for (lname = 0; name[lname]; lname++);
    for (lowner = 0; name[lowner]; lowner++);

    ptr -> name = malloc(sizeof(lname));
    ptr -> owner = malloc(sizeof(lowner));
    
    for(i = 0; i < lname; i++)
        ptr -> name[i] =name[lname];
    
    for(j = 0; i < lowner; i++)
        ptr -> owner[i] =owner[lowner];
    ptr->age = age;

    return ptr; 
}