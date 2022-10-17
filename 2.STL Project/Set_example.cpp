#include <iostream>
#include <set>

using namespace std;

void printset(set<int> words);

int main()
{
    std::set<int> myints;
    std::set<int>::iterator it;
    cout << "size: " << myints.size() << '\n';

    /* insert() */
    for (int i = 0; i < 10; ++i)
        myints.insert(i);
    cout << "\ninsert()";
    printset(myints);
    cout << "size: " << myints.size() << '\n';

    /* find() */
    cout << "\nfind() 6 and erase() it";
    it = myints.find(6);
    myints.erase(it);
    printset(myints);
    cout << "size: " << myints.size() << '\n';
    return 0;
}

void printset(set<int> words)
{
    set<int>::iterator i;
    cout << "\nset: ";
    for (i = words.begin(); i != words.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}