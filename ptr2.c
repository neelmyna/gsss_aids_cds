#include <stdio.h>

int main()
{
    float num = 4.5f;
    float *ptr = &num;
    printf("Value of ptr = %u (ptr) \n", ptr);
    printf("Value of ptr = %u (&num) \n", &num);
    printf("Address of Ptr = %u (&ptr)\n", &ptr);
    printf("Value of Num = %f (*ptr)\n", *ptr);
    printf("Address of Num = %u (ptr))\n", ptr);
    printf("Value of Num = %f (**(&ptr))\n", **(&ptr));
}