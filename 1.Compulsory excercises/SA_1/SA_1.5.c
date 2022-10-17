// Predicted Output:
// 2 3 1
// 5 5
// 1 2 5

// Check
#include <stdio.h>
int main()
{
    int a[3] = {1, 2, 3};
    int b = 5;
    int *p1, *p2;
    p1 = &a[1];
    p2 = &a[2];
    printf("%i %i %li \n", *p1, *p2, p2 - p1);
    p1++;
    *p1 = b;
    printf("%i %i  \n", *p1, *p2);
    printf("%i %i %i \n", a[0], a[1], a[2]);
}