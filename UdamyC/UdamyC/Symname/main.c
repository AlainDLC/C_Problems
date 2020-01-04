# include <stdio.h>

int main()
{
    
    typedef int * iptr;
    int x = 10, y=20;
    iptr ptr1,ptr2;
    ptr1 = &x;
    ptr2 = &y;

    printf("%d  %d ",*ptr1,*ptr2);

    return 0;
}
