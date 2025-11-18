#include <stdio.h>

int main()
{
    float num = 4.5f;
    printf("Value of Num = %f (num) \n", num);
    printf("Address of Num = %u (&num)\n", &num);
    printf("Value of Num = %f (*(&num))\n", *(&num));
}