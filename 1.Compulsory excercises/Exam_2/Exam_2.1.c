#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isContainLower(char pswd[])
{
    int n = strlen(pswd);
    for (int i = 0; i < n; i++)
    {
        if (islower(pswd[i]))
            return 1;
    }
    return 0;
}

int isContainUpper(char pswd[])
{
    int n = strlen(pswd);
    for (int i = 0; i < n; i++)
    {
        if (isupper(pswd[i]))
            return 1;
    }
    return 0;
}

int isContainNonletter(char pswd[])
{
    int n = strlen(pswd);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(pswd[i]) == 0)
            return 1;
    }
    return 0;
}

int isValidPassword(char pswd[], FILE *file)
{
    if ((isContainLower(pswd)) && (isContainNonletter(pswd)) && (isContainUpper(pswd)))
        return 1;
    else
    {
        if (isContainLower(pswd) == 0)
            // printf("Not contain lowercase letter - ");
            fputs("Not contain lowercase letter - ", file);
        if (isContainUpper(pswd) == 0)
            // printf("Not contain uppercase letter - ");
            fputs("Not contain uppercase letter - ", file);
        if (isContainNonletter(pswd) == 0)
            // printf("All is letter character - ");
            fputs("All is letter character - ", file);
    }
    return 0;
}

int main()
{
    FILE *pswfile;
    FILE *result;
    result = fopen("result.txt", "w+");
    char line[100];
    pswfile = fopen("pswfile.txt", "r");
    if (pswfile == NULL)
        return 1;
    while (fgets(line, 100, pswfile))
    {
        line[strlen(line) - 1] = '\0';
        if (isValidPassword(line, result))
        {
            fputs("Valid!\n", result);
        }
        else
            fputs("Unvalid!\n", result);
    }
    fclose(result);
    fclose(pswfile);
    return 0;
}