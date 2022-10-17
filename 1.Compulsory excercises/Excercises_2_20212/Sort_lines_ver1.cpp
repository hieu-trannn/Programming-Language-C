// Program to sort lines from input by alphabet

// Input: lines(<5000) with the number of words in each line <1000; type double enter to stop input
// Output: sorted lines  

// Ver 1: Using cpp without malloc

#include <bits/stdc++.h>
using namespace std;
const int MAXLINES = 5000;
const int MAXLEN = 1000;
int read(char *ptr[]);
void write(char *ptr[], int nol);
void sort(char *ptr[], int nol);
int readline(char *p);
char *copyString(char s[]);

int main()
{
    char *pline[MAXLINES];
    int nol;
    cout << "==================START PROGRAM==================" << endl;
    fflush(stdin);
    if ((nol = read(pline)) == -1)
        cout << "Too much lines!" << endl;
    else if (nol == 0)
        cout << "No input!";
    else
    {
        cout << "==================FINAL RESULT==================" << endl;
        sort(pline, nol);
        write(pline, nol);
    }
}

int read(char *ptr[])
{
    int nol = 0, noc;
    char *p, line[MAXLEN];
    while (((noc = readline(line)) > 0))
    {
        if (nol > MAXLINES)
            return -1;
        else
        {
            p = copyString(line);
            ptr[nol++] = p;
        }
    }
    fflush(stdin);
    return nol;
}

int readline(char p[])
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
    fflush(stdin);
    return noc;
}

void write(char *ptr[], int nol)
{
    int i = 0;
    do
    {
        cout << ptr[i++] << endl;
    } while (--nol);
}

char *copyString(char s[])
{
    char *s2;
    s2 = (char *)malloc(strlen(s));
    strcpy(s2, s);
    return (char *)s2;
}

void sort(char *p[], int nol)
{

    char *temp;
    for (int i = 0; i < nol; i++)
        for (int j = i + 1; j < nol; j++)
        {
            if (strcmp(p[i], p[j]) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
}