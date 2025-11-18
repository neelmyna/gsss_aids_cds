#include <stdio.h>

int main(int argCount, char **args)
{
    // float num = 25; // implicit up cast

    int num = 50;
    int p = &num; // Assume addres of num is 1351
    printf("%u  %u  %u  %u \n", p - 1, p, p + 1, p + 2);
    // 1350  1351  1352
}