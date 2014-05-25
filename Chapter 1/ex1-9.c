#include <stdio.h>

#define IN_SPACE 1
#define OUT_SPACE 0

/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. */
main()
{
    int c, state;
    
    state = OUT_SPACE;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && state == OUT_SPACE) {
            putchar(c);
            state = IN_SPACE;
        }
        else if (c != ' ' || c != '\t' && state == OUT_SPACE) {
            putchar(c);
        }
        else if (c != ' ' && state == IN_SPACE) {
            putchar(c);
            state = OUT_SPACE;
        }
    }
}