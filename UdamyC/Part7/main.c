#include <stdio.h>

/*Advanced pointers*/
int main()
{
    int p = 1034;
    int q = 20;
    int *ptr1;
    ptr1 = &p;
    *ptr1 = 100;
    printf("%d  %d",p, *ptr1);
    ptr1=&q;
    p=1000;
    q=2030;
    printf("\n%d    %d  %d",p,q,*ptr1);

    return 0;
}
