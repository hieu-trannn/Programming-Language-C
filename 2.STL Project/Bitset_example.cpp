#include <bits/stdc++.h>
using namespace std;

int main()
{
    // default constructor initializes with all bits 0
    bitset<32> bset1;
    // bitset is initialized with bits of 20
    bitset<32> bset2(20);
    // bitset is initialized with bits of specified binary string
    bitset<32> bset3(string("1100"));

    // Print all bits representation of bitset
    cout << "Bitset1: " << bset1 << endl
         << "Bitset2: " << bset2 << endl
         << "Bitset3: " << bset3 << endl;
    return 0;
}