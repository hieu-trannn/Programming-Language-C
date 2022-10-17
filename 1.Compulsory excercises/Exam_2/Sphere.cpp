#include <bits/stdc++.h>
using namespace std;
#include "Shapes.cpp"

class Sphere : public Shapes
{
private:
    float radius;
    string shapeName = "Sphere";

public:
    float area() { return 4 * radius * radius * M_PI; }

    Sphere(float r = 0) { radius = r; }
    void setRadius(float r) { radius = r; }
    string toString() { return shapeName; }
};

class Retangle : public Shapes
{
private:
    float length, width;
    string shapeName = "Retagle";

public:
    float area() { return width * length; }
    Retangle(float a = 0, float b = 0)
    {
        length = a;
        width = b;
    }
    void setSize(float a, float b)
    {
        length = a;
        width = b;
    }
    string toString() { return shapeName; }
};

class Cylinder : public Shapes
{
private:
    float radius, height;
    string shapeName = "Cylinder";

public:
    float area() { return M_PI * radius * radius * height; }

    Cylinder(float r = 0, float h = 0)
    {
        radius = r;
        height = h;
    }
    void setSize(float r, float h)
    {
        radius = r;
        height = h;
    }
    string toString() { return shapeName; }
};