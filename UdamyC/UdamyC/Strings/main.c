# include <stdio.h>
# include <string.h>

/* Bye is true*/
int main()
{
    char str[] = "\0";
    if(printf("%s",str))
        printf("Welcome");
        else
        {
            printf("bye");
        }
        
    return 0;
}
