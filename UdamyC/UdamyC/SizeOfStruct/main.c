# include <stdio.h>

struct test {
    char c1; float f1; int il; char c2;
    double d1; int i2;
};
struct test1 {
    double d1; float fi; int i1,i2;
    char c1,c2;
};

int main()
{
    struct test t1;
    struct test1 t2;

    printf("%d %d ", sizeof(t1),sizeof(t2));
    return 0;
}
