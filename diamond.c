#include <stdio.h>

int main(void)
{
    const int rows = 9; /* total rows in the diamond */
    int row, i, spaces, stars;

    /* Top half (including the middle row) */
    for (row = 1; row <= rows / 2 + 1; row++) {
        spaces = rows / 2 + 1 - row;
        stars = 2 * row - 1;

        for (i = 1; i <= spaces; i++)
            printf(" ");

        for (i = 1; i <= stars; i++)
            printf("*");

        printf("\n");
    }

    /* Bottom half */
    for (row = rows / 2; row >= 1; row--) {
        spaces = rows / 2 + 1 - row;
        stars = 2 * row - 1;

        for (i = 1; i <= spaces; i++)
            printf(" ");

        for (i = 1; i <= stars; i++)
            printf("*");

        printf("\n");
    }

    return 0;
}