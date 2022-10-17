// Transform FOR LOOP to WHILE LOOP
// This file include solution and test the ans

#include <iostream>
using namespace std;

int main()
{
    int i, l;
    char s[20] = "Helu, I am Link";

    // Original code using FOR LOOP
    cout << "========Output when using FOR LOOP==========" << endl;
    for (i = 0, l = 0; s[i] != '\0'; i++, l++)
        ;
    cout << "i = " << i << " and l = " << l << endl;

    // Using WHILE LOOP
    cout << "=======Output when using WHILE LOOP=========" << endl;
    i = 0; l = 0;
    while (s[i] != '\0')
    {
        i++; l++;
    }
    cout << "i = " << i << " and l = " << l << endl;
    return 0;
}
