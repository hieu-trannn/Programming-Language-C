#pragma once
#include <iostream>
using namespace std;
class Point3D
{
public:
    Point3D();
    Point3D(float x, float y, float z);
    void showpoint();
    float distance(float x, float y, float z);
    // enclapsulation
private:
    float m_x;
    float m_y;
    float m_z;
};
class Vector3D : public Point3D
{
public:
    // Vector3D inheritants function distance of Point3D
    Vector3D();
    Vector3D(float x, float y, float z);
    Vector3D addvector(Vector3D v);
    Vector3D subtractvector(Vector3D v);
    Vector3D scale(float k);
    float dotproduct(Vector3D v);
    Vector3D crossproduct(Vector3D v);
    float getv_x();
    float getv_y();
    float getv_z();
    void showVector();

private:
    float v_x;
    float v_y;
    float v_z;
};