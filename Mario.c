#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int h, r, c, s;

    do
    {
        printf("pick a number that is between 1-8\n");
        h = get_int("height:");
    }
    while (h < 1 || h > 8);

    // 1st iteration of r
    // r = 0
    // printing:
    // 0
    // 2nd iteration of r
    // r = 1
    // printing:
    // 1 1
    for (r = 0; r < h; r++)
    {
        // space starts at 0. while space is less than (height - row - 1), print " " and repeat.
        for (s = 0; s < h - r - 1; s++)
        {
            printf(" ");

        }
        for (c = 0; c <= r; c++)
        {
            printf("#");
        }
        printf("\n");

    }

}
