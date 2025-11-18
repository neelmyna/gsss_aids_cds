#include <stdio.h>

int main()
{
    float num = (double)((int)17.55 / 3);
    printf("Num = %d \n", num); // 5
    printf("Num = %f \n", num); // 5.66666
}