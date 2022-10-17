// Program to sort lines from input by alphabet

// Input: lines(<5000) with the number of words in each line <1000; type double enter to stop input
// Output: sorted lines

// Ver 2: Using c with malloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 5000 /* max lines to be sorted */
#define MAXLEN 1000   /* max length of any input line */

int readlines(char *lineptr[]);
int getline(char *line);
void writelines(char *lineptr[], int nlines);
void sort(char *lineptr[], int nlines);
char *copyString(char s[]);

int main()
{
    char *lineptr[MAXLINES]; /* pointers to text lines */
    printf("LET'S START\n");
    int nlines; /* number of input lines read */
    if ((nlines = readlines(lineptr)) >= 0)
    {
        sort(lineptr, nlines);
        printf("RESULT\n");
        writelines(lineptr, nlines);
        return 0;
    }
    else
    {
        printf("TOO MUCH LINES\n");
        return 1;
    }
}

int readlines(char *lineptr[])
{
    int len, n = 0; // length of line and the number of lines
    char *p, line[MAXLEN];
    p = (char *)malloc(len);
    while ((len = getline(line)) > 0)
        if (n >= MAXLINES || ((p == NULL)))
            return -1;
        else
        {
            p = copyString(line);
            lineptr[n++] = p;
        }
    return n;
}
char *copyString(char s[])
{
    char *s2;
    s2 = (char *)malloc(strlen(s));

    strcpy(s2, s);
    return (char *)s2;
}
/* getline: read a line into s, return length */
int getline(char p[])
{
    int noc = 0;
    char c;
    while (((c = getchar()) != EOF) && (c != '\n') && (noc <= MAXLEN))
    {
        p[noc] = c;
        noc++;
    }
    if (c == '\n')
    {
        p[noc] = '\0';
    }
    return noc;
}
void writelines(char *lineptr[], int nlines)
{
    int i;
    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}
void sort(char *v[], int n)
{
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (strcmp(v[i], v[j]) > 0)
            {
                /* swaps only pointers to strings */
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
}