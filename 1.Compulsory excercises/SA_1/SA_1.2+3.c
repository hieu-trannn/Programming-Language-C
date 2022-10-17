// This program is for exe 3 and 4 of SA_1
// Exe3 ---> Output: 1 2 3 4
// Exe4 ---> Output: 1 1 2 3

// Check
#include <stdio.h>
void rec3(int p)
{
    if (p > 1)
        rec3(p - 1);
    printf("%i ", p);
}
void rec4(int p)
{
    if (p > 1)
        rec4(--p);
    printf("%i ", p);
}
int main()
{
    rec3(4);
    rec4(4);
    return 0;
}
