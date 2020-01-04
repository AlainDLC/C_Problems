#include <stdio.h>

int main()
{
    int p, q;
    scanf("%d %d", &p, &q);
    p += 10;
    q -= 10;

    if ((p = 5) && (q = -3))

        printf("True");

    else
        printf("False");

    return 0;
}
