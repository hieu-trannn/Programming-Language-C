#include <iostream>
using namespace std;

class Triple
{
private:
    float x, y, z;

public:
    // Constructor: all = 0 by default or by user-specified value
    Triple(float a = 0, float b = 0, float c = 0)
    {
        x = a;
        y = b;
        z = c;
    }

    // set and get data function
    void setx(float ip) { x = ip; }
    void sety(float ip) { y = ip; }
    void setz(float ip) { z = ip; }
    float getx() { return (x); }
    float gety() { return (y); }
    float getz() { return (z); }

    // Addition operator (+) overloading (1st bullet point)
    Triple operator+(Triple op)
    {
        Triple ans;
        ans.x = x + op.x;
        ans.y = y + op.y;
        ans.z = z + op.z;
        return ans;
    }

    // << overloading to display the Triple (2nd bullet point)
    friend ostream &operator<<(ostream &os, const Triple &op);

    // Overloading = operator for Assignment (3rd bullet point)
    void operator=(Triple op)
    {
        x = op.z;
        y = op.x;
        z = op.y;
    }

    // Overloading ++ operator for Post-increment (4th bullet point)
    void operator++()
    {
        x++;
        z++;
    }

    // Function call operator overloading (5th bullet point)
    Triple operator()(float a, float b, float c)
    {
        Triple ans;
        ans.x = a;
        ans.y = b;
        ans.z = c;
        return ans;
    }
};

ostream &operator<<(ostream &os, const Triple &op)
{
    os << "The tiple is (" << op.x << ", " << op.y << ", " << op.z << ")." << endl;
    return os;
}

int main()
{
    // TEST THE PROGRAM
    Triple x;
    Triple y(16.12, 2.02, 10);
    cout << "=========CHECK CONSTRUCTOR=================" << endl
         << "Default: " << x << "User-specified: " << y;
    cout << "=========CHECK SET AND GET FUCTION=========" << endl;
    x.setx(1.7);
    x.sety(0.33);
    x.setz(18);
    cout << "x, y, z of Triple x after:" << x.getx() << " " << x.gety() << " " << x.getz() << endl;
    cout << "=========CHECK ADDITION AND << OPERATOR=====" << endl
         << "Triple y before: " << y << "Triple x+y: " << y + x;
    cout << "=========CHECK ASSIGNMENT===================" << endl;
    cout << "Triple x before: " << x << "Triple y: " << y;
    x = y;
    cout << "x after Assign x=y: " << x;
    cout << "=========CHECK POST-INCREMENT===============" << endl;
    ++x;
    cout << "Triple x after: " << x;
    cout << "=========CHECK FUNCTION CALL================" << endl;
    cout << "Triple y after: " << y(16, 12, 2);
    return 0;
}