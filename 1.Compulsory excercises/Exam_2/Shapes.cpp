#include <bits/stdc++.h>
using namespace std;
class Shapes
{
protected:
    string shapeName;

public:
    virtual float area() = 0;
    virtual string toString() = 0;
};