#include <bits/stdc++.h>
using namespace std;

void print_nob(string input, int type)
{
    array<int, 8> base; // g, a, c, t, G, A, C, T respectively
    base.fill(0);
    for (char c : input)
    {
        switch (c)
        {
        case 'G':
            base.at(4)++;
            break;

        case 'g':
            base.at(0)++;
            break;

        case 'A':
            base.at(5)++;
            break;

        case 'a':
            base.at(1)++;
            break;

        case 'C':
            base.at(6)++;
            break;

        case 'c':
            base.at(2)++;
            break;

        case 'T':
            base.at(7)++;
            break;

        case 't':
            base.at(3)++;
            break;

        default:
            cout << "Error ADN" << endl;
            return;
        }
    }

    if (type)
    {
        cout << "Number of g, a, c, t, G, A, C, T respectively is: ";
        for (int i : base)
        {
            cout << i << "  ";
        }
    }
    else
    {
        cout << "Number of G, A, C, T respectively is: ";
        for (int i = 0; i < 4; i++)
            cout << base.at(4 + i) + base.at(i) << " ";
    }
}

int main()
{
    cout << "Part a=================================" << endl;
    string dna = "AGTcccaaGTCAGACAATGAAtataAATCG";
    print_nob(dna, 0);

    cout << endl
         << endl
         << "Part b=================================" << endl;
    string user_input;
    cout << "Enter your ADN: ";
    getline(cin, user_input);
    print_nob(user_input, 0);

    cout << endl
         << endl
         << "Part c=================================" << endl;
    cout << "Default ADN:" << endl;
    print_nob(dna, 1);
    cout << endl
         << "User ADN" << endl;
    print_nob(user_input, 1);
    cout << endl;
    return 0;
}