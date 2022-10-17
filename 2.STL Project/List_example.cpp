#include <list>
#include <string>
#include <iostream>

using namespace std;

void printlist(list<std::string> words);

int main()
{
    std::list<std::string> words1, words2;
    std::list<std::string>::iterator it;
    /* push_front() & push_back()*/
    words1.push_front("one");
    words1.push_back("two");
    words1.push_front("zero");
    words1.push_back("three");
    cout << "\npush_front() & push_back()";
    printlist(words1);
    cout << "size() : " << words1.size() << endl;
    cout << "max_size() : " << words1.max_size() << endl;

    /* pop_front() */
    words1.pop_front();
    cout << "\npop_front()";
    printlist(words1);
    cout << "size() : " << words1.size() << endl;
    cout << "max_size() : " << words1.max_size() << endl;

    return 0;
}

void printlist(list<std::string> words)
{
    list<std::string>::iterator i;
    cout << "\nlist: ";
    for (i = words.begin(); i != words.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}