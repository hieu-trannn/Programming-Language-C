#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void printdeque(deque<int> dq);

int main()
{

    int a[] = {1, 5, 8, 9, 3};

    /* creates s deque with elements 1,5,8,9,3  */
    deque<int> dq(a, a + 5);
    cout << "deque: ";
    printdeque(dq);
    cout << "size() : " << dq.size() << endl;
    cout << "max_size() : " << dq.max_size() << endl;

    /* push_back() */
    dq.push_back(10);
    cout << "\npush_back(10): ";
    printdeque(dq);
    cout << "size: " << dq.size() << endl;
    cout << "max_size() : " << dq.max_size() << endl;

    /* push_front() */
    dq.push_front(20);
    cout << "\npush_front(20): ";
    printdeque(dq);
    cout << "size: " << dq.size() << endl;
    cout << "max_size() : " << dq.max_size() << endl;

    deque<int>::iterator i;
    i = dq.begin() + 2; /* i points to 3rd element in dq */

    /* insert(iterator, element) */
    dq.insert(i, 15);
    cout << "\ninsert(3rd position,15): ";
    printdeque(dq);
    cout << "size: " << dq.size() << endl;
    cout << "max_size() : " << dq.max_size() << endl;
    return 0;
}

void printdeque(deque<int> dq)
{
    deque<int>::iterator i;
    for (i = dq.begin(); i != dq.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
