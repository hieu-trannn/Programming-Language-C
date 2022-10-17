// Ans: 11 7

// Test
#include <stdio.h>
void fct(int *a, int b)
{
    b++;
    *a = *a + b;
}
int main(void)
{
    int x = 3, y = 7;
    fct(&x, y);
    printf("%i %i", x, y);
    return 0;
}
