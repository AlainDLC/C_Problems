#include <stdio.h>

int main()
{
    int ai[] = {10, 20, 30, 40, 50};
    double af[] = {10.0, 20.0, 30.0, 40.0, 50.0};
    int *ptr = ai;
    double *fptr = af;

    printf("%d  %d  %d", sizeof(ai), sizeof(ptr), sizeof(*ptr));
    printf("%d  %d  %d", sizeof(af), sizeof(fptr), sizeof(*fptr));

    return 0;
}
