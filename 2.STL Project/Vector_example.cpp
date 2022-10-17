#include <iostream>
#include <vector>
using namespace std;
void printvect(vector<int> v);
int main()
{
    vector<int> v; // Declaration of vector v
    vector<int>::iterator i;

    // push_back()
    v.push_back(16);
    v.push_back(12);
    v.push_back(2);
    v.push_back(2022);
    cout << "Push_back(): ";
    printvect(v);
    cout << "Size = " << v.size() << ", Capacity = " << v.capacity() << endl;

    /* insert(iterator, value) */
    i = v.begin();
    v.insert(i, 0);
    cout << "\ninsert(iterator, value): ";
    printvect(v);
    cout << "size = " << v.size() << ", cap = " << v.capacity() << endl;

    /* pop_back() */
    v.pop_back();
    cout << "\npop_back(): ";
    printvect(v);
    cout << "size = " << v.size() << ", cap = " << v.capacity() << endl;

    /* resize(n, val) */
    v.resize(8, 0);
    cout << "\nresize(n, val): ";
    printvect(v);
    cout << "size = " << v.size() << ", cap = " << v.capacity() << endl;

    /* Access Element */
    cout << "\n1st Element: " << v.at(0) << endl
         << "2st Element: " << v[1] << endl;
}

void printvect(vector<int> v)
{
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}