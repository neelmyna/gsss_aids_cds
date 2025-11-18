#include <stdio.h>

int main()
{
    char s1[32] = "";
    char s2[32] = "bengaluru";
    printf("Before Copying,  S1=%s,   S2=%s \n", s1, s2);
    int i = 0;
    for (; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    printf("After Copying,  S1=%s,   S2=%s \n", s1, s2);
    return 0;
}