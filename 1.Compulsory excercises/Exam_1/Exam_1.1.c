#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

#define MAX_LINE 30
int main()
{
    FILE *textfile;
    char *linetxt[MAX_LINE];
    char line[100];
    textfile = fopen("textfile.txt", "r");
    if (textfile == NULL)
        return 1;
    int i = 0;
    while (fgets(line, 100, textfile))
    {
        if (line[strlen(line) - 1]=='\n') line[strlen(line) - 1]='\0';
        if ((line[strlen(line) - 1] & 1) % 2 == 0) // last bit is 0
            strrev(line);
        else
            line[strlen(line) - 1] = '\0';

        linetxt[i++] = strdup(line);
        if (i > MAX_LINE)
            return 1;
    }
    fclose(textfile);
    for (int j = 0; j < i; j++)
        printf("%s \n", linetxt[j]);
}
