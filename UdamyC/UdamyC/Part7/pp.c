#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 'P', b;
    char *pa = &a, *pb;
    *pa = a + 1;

    pb = &a;

    printf("%c %c %c", *pb, *pa, a);
    return 0;
}
