// Ans:
// *--pc ---> same as *(--pc) ---> Decrease pointer by 1 (pointer pc will point to the previous char), then get the value of that char (pointed by "updated" pc pointer)
// --*pc ---> same as --(*pc) ---> Get the value of char pointed by pc, then decrease that value by 1

// In this code example: *--pc will return i; --*pc will return '

#include <stdio.h>
int main()
{
    char *pc;
    char str[] = "ciao!";
    pc = &str[2];
    printf("%c %c",*--pc, --*pc);
    return 0;
}