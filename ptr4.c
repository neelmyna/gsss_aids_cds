#include <stdio.h>

int main(int argCount, char **args)
{
    long long int num = 25; // &num = 1101
    printf("%u  %u  %u  %u \n", &num - 1, &num, &num + 1, &num + 2);
    //  1093  1101  1109  1117
}