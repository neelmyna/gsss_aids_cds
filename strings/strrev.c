#include "strrev.h"
#include "strlen.h"

char *strrev(char *ptr)
{
    int stringLength = strlen(ptr);
    for (int i = 0, j = stringLength - 1; i < j; i++, j--)
    {
        char temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
    }
    return ptr;
}