#include <stdio.h>
#include "strrev.h"

int main(int argCount, char **args) // command line Args
{
    printf("User given string is %s \n", args[1]);
    strrev(args[1]);
    printf("Reversed string is %s \n", args[1]);
}
