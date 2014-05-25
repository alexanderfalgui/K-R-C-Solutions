#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
main()
{
    int c, nlc, bc, tc, chc;
    
    nlc = bc = tc = chc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n') {
            ++nlc;
        }
        else if (c == ' ') {
            ++bc;
        }
        else if (c == '\t') {
            ++tc;
        }
        ++chc;
    }   
    
    printf("Blank count: %d\n", bc);
    printf("Tab count: %d\n", tc);
    printf("Newline count: %d\n", nlc);
    printf("Character count: %d\n", chc);
}
