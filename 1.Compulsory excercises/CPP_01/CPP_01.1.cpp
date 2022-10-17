#include <iostream>
using namespace std;
int main()
{
    cout << "=========PART A===========" << endl
         << "Your number: ";
    int a;
    cin >> a;
    if ((a >= 0) && (a <= 100))
        cout << "Valid!" << endl;
    else
        cout << "Unvalid!" << endl;

    cout << "=========PART B===========" << endl
         << "Your number: ";
    int b;
    cin >> b;
    if (b >= 0)
    {
        if (b % 4 == 0)
        {
            if (b % 3 == 0)
                cout << "Satisfied check 3" << endl;
            else
                cout << "Satisfied check 2" << endl;
        }
        else
            cout << "Satisfied check 1" << endl;
    }
    else
        cout << "Unsatisfied" << endl;
    return 0;
}