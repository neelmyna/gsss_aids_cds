#include "strlen.h"

int strlen(char const *ptr)
{
    int i = 0;
    for (; ptr[i] != '\0'; i++)
        ;
    return i;
}