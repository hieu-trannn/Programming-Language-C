//input lines, count numbers of each disparity lines
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<string, int> hieudz;
    map<string, int>::iterator it;
    string str;
    cout<<" -----------LET'S START -------------"<<endl;
    while (getline(std::cin, str))
    {

        if ((it = hieudz.find(str)) != hieudz.end())
            hieudz[str]++;
        else
            hieudz.insert({str, 1});
    }
    cout<<"------------THE RESULT_______________"<<endl;
    for (it = hieudz.begin(); it != hieudz.end(); ++it)
    {
        cout << it->first << "   " << it->second
             << '\n';
    }
    return 0;
}