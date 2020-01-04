#include <stdio.h>

int main()
{
    int a1[] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr=&a1[5];

    printf("%d %d %d",*ptr,ptr[3],ptr[-3]  );
    
    return 0;
}
