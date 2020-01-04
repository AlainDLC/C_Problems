# include <stdio.h>
/* Guess the output */

typedef struct info {
    int dno;
    char *aday;
}day;

int main()
{
    day first = {1,"Monday"};
    day secund = {2,"Tuesday"};

    printf("%d %s",first.dno,secund.aday);
    
    return 0;
}
