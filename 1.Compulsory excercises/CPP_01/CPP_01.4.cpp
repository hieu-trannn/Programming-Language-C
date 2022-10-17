#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cout << "========PATTERN A========" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << "#";
        cout << endl;
    }

    cout << "========PATTERN B========" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 0 || j == 9)
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << "========PATTERN C========" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 0 || j == 9 || i == j)
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}