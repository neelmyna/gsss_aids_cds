#include<stdio.h>

int main() {
    char c;
    int i;
    double d;
    char* pc;
    int* pi;
    double *pd;
    printf("%d  %d  %d \n", sizeof(c), sizeof(i), sizeof(d));
    //  1   4   8 
    printf("%d  %d  %d \n", sizeof(pc), sizeof(pi), sizeof(pd));
    //  4   4   4
    
}