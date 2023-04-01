#include <stdio.h>

int main() {
    int i, j;
    int num1= 20;
    int num2= 40;
    for(i = 1; i <= num1; i++)
    {
        for (j =  1; j <= num2; j++)
    {
        printf("%d x %d = %d \n", i, j, i*j);
    }
    printf("\n");
}
    return 0;
}
