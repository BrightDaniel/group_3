#include <stdio.h>

/**
Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
*/

int main()
{
        int i, j, num;

        for(i = 1; i <= 4; i++)
        {
                for(j = 1; j <= i; j++)
                {
                        printf(" %d", i);
                        num++;

                 }
                printf("\n");
        }
        return 0;
}
