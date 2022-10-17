// Program to sort lines from input by alphabet

// Input: lines(<5000) with the number of words in each line <1000; need to type in number of lines before type input
// Output: sorted lines

// Ver 3: Using cpp without pointer

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j, count;
    char str[25][25], temp[25];
    puts("number of lines: ");
    cin >> count;
    puts("enter string:");
    for (i = 0; i < count; i++)
        cin >> str[i];
    for (i = 0; i < count; i++)
        for (j = i + 1; j < count; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    printf("output:\n");
    for (i = 0; i <= count; i++)
        puts(str[i]);
}