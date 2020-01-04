#include <stdio.h>

int main()
{
    int p = 100;
    int *ptr = &p;
    int **dptr = &ptr;
    int ***tptr = &dptr;
    printf("%d %d %d ", *ptr, **dptr, ***tptr);

    *ptr = *ptr + 100;
    **dptr = **dptr + 100;
    ***tptr = ***tptr + 100;

    printf("%d %d %d ", *ptr, **dptr, ***tptr);
    return 0;
}
