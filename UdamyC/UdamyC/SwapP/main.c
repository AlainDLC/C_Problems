#include <stdio.h>

void swap(char m, char n);
int main()
{
    char p = 'P', q = 'Q', t;

    swap(&p, &q);
    printf("%c %c", p, q);
    return 0;
}
void swap(char m, char n)
{

    char tmp;
    tmp = m;
    m = n;
    m = tmp;
}