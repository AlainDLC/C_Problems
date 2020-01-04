#include <stdio.h>

int main()
{
    int p = 10, q = 20;
    int const *ptr;
    ptr = &p;
    printf("%d ", *ptr);
    ptr = &q;
    printf("%d ", *ptr);
    
    printf("%d ", *ptr);
    p++;
    printf("%d ", p);

    return 0;
}
