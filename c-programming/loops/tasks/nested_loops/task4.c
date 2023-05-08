#include <stdio.h>

/**
Main - Tasks 04
*/

int main()
{
        int i, j, num;

        for(i = 1; i <= 4; i++)
        {
                for(j = 1; j <= i; j++)
                {
                        printf(" %d", j);
                        num++;

                 }
                printf("\n");
        }
        return 0;
}
