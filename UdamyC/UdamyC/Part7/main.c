#include <stdio.h>

/* %p is used to display addreses stored in pointer*/
int main()
{
    int p = 10;
    char ch = 'p';
    float f = 10.1;
    int *iptr = &p;
    char *cptr = &ch;
    float *fptr = &f;

    printf("%p  %p  %p", iptr, cptr, fptr);
    return 0;
}
