// Predicted Output: Don Ana Don

// Check
#include <stdio.h>
int main()
{
    char *s1 = "Ana";
    char *s2;
    char s3[10] = "Ion";
    s2 = s1;
    s1 = s3;
    s3[0] = 'D';
    printf("%s %s %s", s1, s2, s3);
    return 0;
}