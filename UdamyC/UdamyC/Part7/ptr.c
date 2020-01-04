# include <stdio.h>

/* pointe to 10++ ptr++ 20 , 30 , 40 ....*/
int main()
{
    int ai[5] = {10,20,30,40,50};
    int n;
    int *ptr= ai;
for(n=0; n<5; n++) {
    printf("%d\n", *ptr);
    ptr++;
}

    return 0;
}
