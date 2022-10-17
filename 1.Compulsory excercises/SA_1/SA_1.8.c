#include <stdio.h>
#include <string.h>
int main()
{
    // char *s1;
    // char *s2;
    // error because pointers do not point to value
    // => fix: use array like below or make arrays and point the given pointers to arrays
    char s1[10];
    char s2[10];
    // scanf("%s",s1);
    scanf("%s", s1);
    strcpy(s2, s1);
    // printf("%s %s",*s1, *s2);
    printf("%s %s", s1, s2);
    return 0;
}
