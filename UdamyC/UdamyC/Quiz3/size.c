# include <stdio.h>

/*izeof(ai)=5 element x 4 Bytes = 20 Bytes sizeof(*ai) = 
Size of element at *ai = 4 Bytes sizeof(ptr)=sizeof address stored in "ptr" = 8 Bytes
 sizeof(ptr1)=sizeof address stored in "ptr1" = 8 Bytes sizeof(*ptr) = 
 Size of element at *ptr = 4 Bytes sizeof(*ptr1) 
 = Size of elements at *ptr1. It is pointer to array of 5 integers = 4 Bytes * 5 = 20 Bytes*/
int main()
{
   int ai[] = { 10,20,30,40,50 };
    int *ptr = ai;
    int p,q,r,s,t,u;
    int (*ptr1)[5] = &ai;
    p=sizeof(ai);
    q=sizeof(*ai);
    r=sizeof(ptr);
    s=sizeof(ptr1);
    t=sizeof(*ptr);
    u=sizeof(*ptr1);
    printf("%d %d  %d  %d  %d  %d", p,q,r,s,t,u);
    return 0;
    return 0;
}
