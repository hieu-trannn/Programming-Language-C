#include <iostream>
#include "Vector3D.hh"
#include "Vector3D.cpp"
using namespace std;
int main()
{
    Vector3D v0;
    Vector3D v1(1.0, 2.0, 3.0);
    Vector3D add(2.0, 3.0, 4.0); // used for add and dotproduct, crossproduct
    Vector3D substract(1.0, 0.0, 0.0);
    float k = 2.0; // scale
    v0.showVector();
    v1.showVector();
    v1.addvector(add).showVector();
    v1.subtractvector(substract).showVector();
    v1.scale(k).showVector();
    cout << v1.dotproduct(add) << endl;
    v1.crossproduct(add).showVector();
    cout << v1.distance(v1.getv_x(), v1.getv_y(), v1.getv_z()) << endl;
    return 0;
}