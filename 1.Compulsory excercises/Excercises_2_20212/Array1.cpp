#include <iostream>
using namespace std;
template <class Element, class Noe>
class Array
{
private:
    Element arr[];
    Noe num_elements;
public: 
Element i[];
Array(std::initializer_list<Element> l): i[l]{
    cout<<"constructor with a "<<l.size()<<'\n';
}

};
int main(){
    const Array<int,4> a{1,2,3,4};
}