#include <stdio.h>
#include <string.h>
#include <cstdlib>

#define maxline 30
int nline = 0;

int read(char *line[]);                // read line and save into pointer line[]
int getline(char p[]);                 // input line
void transformline(char *line[]);      // sort
int checkiflastbitzero[maxline];       // initialized in getline function, used in transformline function
void printline(char *line[], int nol); // print the output
char *copyString(char s[]);
void reverse(char str[])
{
    int l, i;
    char *begin_ptr, *end_ptr, temp;

    l = strlen(str);
    begin_ptr = str;
    end_ptr = str;

    for (i = 0; i < l - 1; i++)
        end_ptr++;

    for (i = 0; i < l / 2; i++)
    {
        temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;
        begin_ptr++;
        end_ptr--;
    }
}
int main()
{
    char *line[maxline];
    int nlines; // number of line
    printf("LET'S START\n");
    nlines = read(line);
    if (nlines > 0)
    {
        printf("RESULT\n");
        transformline(line);
        printline(line, nlines);
        return 0;
    }
    else if (nlines == 0)
    {
        printf("No input");
    }
    else
    {
        printf("TOO MUCH LINEs");
        return 1;
    }
}
int read(char *line[])
{
    int nol = 0, len; // nol: number of lines len: number of characters in line
    char *p, lines[maxline];
    while ((len = getline(lines)) > 0)
    {
        if (nol > maxline)
            return -1;
        else
        {
            p = copyString(lines);
            line[nol] = p;
            nol++;
        }
    }
    fflush(stdin);
    return nol;
}
char *copyString(char s[])
{
    char *s2;
    s2 = (char *)malloc(strlen(s));

    strcpy(s2, s);
    return (char *)s2;
}
int getline(char p[]) // input from keyboard
{
    int noc = 0;
    char c;
    while (((c = getchar()) != '\n') && (c != EOF))
    {
        p[noc] = c;
        noc++;
    }
    if ((int)p[noc - 1] % 2 == 1) // check whether the last character of line is even or odd
    {
        checkiflastbitzero[nline] = 0; // a
    }
    else
    {
        checkiflastbitzero[nline] = 1; // b
    }
    nline = nline + 1;
    if (c == '\n')
        p[noc] = '\0';
    fflush(stdin);
    return noc;
}
void transformline(char *line[])
{
    int noc = 0;                        // number of character
    char *p;                            // pointer points to line
    for (int i = 0; i < nline - 1; i++) // nline: global variable
    {
        if (checkiflastbitzero[i] == 1) // Eg: character b
        {
            reverse(line[i]);
        }
        else
        {
            p = line[i];
            int m = strlen(p);
            *(p + m - 1) = '\0';
            line[i] = p;
        }
    }
}
void printline(char *line[], int nol)
{
    int i;
    for (int i = 0; i < nol; i++)
    {
        printf("%s\n", line[i]);
    }
}
