#include <stdio.h>

/* Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1. 
    ^Z and ^C will make EOF = 0; Any input other than these 2 = 1 */
main()
{
    printf("EOF = %d\n", getchar() != EOF);
}
