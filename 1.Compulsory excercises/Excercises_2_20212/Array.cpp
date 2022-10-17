#include <iostream>
using namespace std;
typedef float Value;
class Array
{
private:
    int n = 10;
    Value art[];

public:
    Array();
    void Nhap();
    ~Array();
    const int Size(Array);
    void Fill(Array);
};
Array::Array()
{
}
void Array::Nhap()
{
    int initializer_list;
    cin >> initializer_list;
    Array k;
    k.n = initializer_list;
    if (initializer_list < n)
    {
        for (int i = 0; i < initializer_list; i++)
        {
            cin >> k.art[i];
        }
    }
    else
    {
        cout << "unsatisfactory value";
        exit(0);
    }
}
const int Array::Size(Array k)
{
    cout << "Size of array is ";
    return sizeof(Value);
}
void Array::Fill(Array k)
{
    int u;
    cout << "enter value: ";
    cin >> u;
    cout << "the element's position is: ";
    for (int i = 0; i < k.n; i++)
    {
        if (k.art[i] == u)
        {
            cout << i << " ";
        }
    }
}
Array::~Array()
{
    cout << "\nEnd" << endl;
}
int main()
{
    Array p;
    p.Nhap();
    return 0;
}