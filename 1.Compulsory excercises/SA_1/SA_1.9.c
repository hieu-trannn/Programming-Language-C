#include <stdio.h>
int main()
{
    // int *t;
    // Error because of pointer do not pointed to any value
    // fix: Declare an array then t pointed to array
    int array[10];
    int *t = array;
    // for (i = 1; i < 10; i++) ---> Error because i is undefined
    // fix: declare i
    for (int i = 1; i < 10; i++)
        scanf("%i", t + i);
    for (int i = 1; i < 10; i++)
        printf("%i ", *(t + i));
    return 0;
}