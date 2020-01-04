#include <stdio.h>

int fun(int p);

int main(int argc, char const *argv[])
{
    int p = 100;
    int q = fun (fun(p));
    printf("%d\n", q);
    
    return 0;
}

int fun(int p)
{
    printf("p = %d\n", p);

    p = p + 100;
    return (p);
}
