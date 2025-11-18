#include <stdio.h>

int main(int argCount, char **args)
{
    double arr[10] = {2.0};
    int n = 0;
    // printf("%d  %lf  %lf  %lf", n, arr[0], arr[1], arr[8]);
    printf("Address of 1st element = %u \n", arr);         // &arr[0]
    printf("Address of 3rd element = %u \n", arr + 2);     // &arr[0]
    printf("Value of 3rd element = %u \n", *(arr + 2));    // arr[2]
    printf("Address of the Array = %u \n", &arr);          //
    printf("Address of the next Array = %u \n", &arr + 1); //
    return 0;
}
