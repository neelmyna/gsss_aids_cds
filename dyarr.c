#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    puts("Enter size of the array");
    scanf("%d", &size); // 15
    float *ptr = NULL;
    ptr = (float *)malloc(sizeof(float) * size);
    float sum = 0.0f;
    printf("Enter %d numbers of the array \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &ptr[i]);
        sum += ptr[i];
    }
    printf("Sum of the array numbers is %.2f \n", sum);
    return 0;
}