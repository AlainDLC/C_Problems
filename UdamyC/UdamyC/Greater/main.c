#include <stdio.h>

int main()
{
    int *ptr1, *ptr2;
    int p = 10, q = 20;
    ptr1 = &p;
    ptr2 = &q;
    printf("Address before ++:%p ", ptr2);
    ptr2++;
    printf("Address after ++:%p ", ptr2);
    printf("\nDifference = %d  ", ptr2 - ptr1);
    if (ptr1 > ptr2)
        printf("\nptr1 is greater");
    if ((ptr2 - ptr1) == 1)
        printf("\nAnswer is 1");

    return 0;
}
