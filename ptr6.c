#include <stdio.h>

int main(int argCount, char **args)
{
    // float num = 25; // implicit up cast

    long int num = 50;
    long long int *p = num; // int* = int
    printf("%u  %u  %u  %u \n", p - 1, p, p + 1, p + 2);
    // 46  50  54  58
}