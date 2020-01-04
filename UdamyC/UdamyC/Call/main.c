#include <stdio.h>

void fun1();
void fun2();
int main()
{
    void(*fptra[2])();
    fptra[0] = fun1;
    fptra[1] = fun2;
    fptra[1](); // fun2 called first
    fptra[0]();

    return 0;
}
void fun1()
{
    printf(" Welcome1");
}
void fun2()
{
    printf(" Welcome2");
}
