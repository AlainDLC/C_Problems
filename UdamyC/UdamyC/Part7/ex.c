#include <stdio.h>

int main()
{
    char ch = 'p';
    float f = 10.1;
    char *cptr = &ch;
    float *fptr = &f;
    *cptr = 'q';
    *fptr = 20.1;

    printf("%c  %c  %.2f  %.2f",ch,*cptr,f,*fptr);
    return 0;
}
