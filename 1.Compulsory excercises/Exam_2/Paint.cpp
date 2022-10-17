#include <bits/stdc++.h>
#include "Sphere.cpp"
using namespace std;

class Paint
{
private:
    float coverage;

public:
    Paint(float a = 0) { coverage = a; }
    float amount(Shapes& S) {return S.area()/coverage;}
};