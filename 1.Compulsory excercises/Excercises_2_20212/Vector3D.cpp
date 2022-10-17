// #pragma once
#include <iostream>
#include <cmath>
#include "Vector3D.hh"
using namespace std;
// overloading by creating 2 objects with different parameters
Point3D::Point3D()
{
    m_x = 0.0;
    m_y = 0.0;
    m_z = 0.0;
}
Point3D::Point3D(float x, float y, float z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}
float Point3D::distance(float x, float y, float z)
{
    return sqrt(x * x + y * y + z * z);
}
void Point3D::showpoint()
{
    cout << "(" << m_x << "," << m_y << "," << m_z << ')' << endl;
}
Vector3D::Vector3D()
{
    v_x = 0;
    v_y = 0;
    v_z = 0;
}
Vector3D::Vector3D(float x, float y, float z)
{
    v_x = x;
    v_y = y;
    v_z = z;
}
Vector3D Vector3D::addvector(Vector3D v)
{
    Vector3D res;
    res.v_x = v_x + v.v_x;
    res.v_y = v_y + v.v_y;
    res.v_z = v_z + v.v_z;
    return res;
}
Vector3D Vector3D::subtractvector(Vector3D v)
{
    Vector3D res;
    res.v_x = v_x - v.v_x;
    res.v_y = v_y - v.v_y;
    res.v_z = v_z - v.v_z;
    return res;
}
Vector3D Vector3D::scale(float k)
{
    Vector3D res;
    res.v_x = v_x * k;
    res.v_y = v_y * k;
    res.v_z = v_z * k;
    return res;
}
float Vector3D::dotproduct(Vector3D v)
{
    return v_x * v.v_x + v_y * v.v_y + v_z * v.v_z;
}
Vector3D Vector3D::crossproduct(Vector3D v)
{
    Vector3D res;
    res.v_x = v_y * v.v_z - v_z * v.v_y;
    res.v_y = v_z * v.v_x - v_x * v.v_z;
    res.v_z = v_x * v.v_y - v_y * v.v_x;
    return res;
}
float Vector3D::getv_x()
{
    return v_x;
}
float Vector3D::getv_y()
{
    return v_y;
}
float Vector3D::getv_z()
{
    return v_z;
}

void Vector3D::showVector()
{
    cout << "(" << v_x << "," << v_y << "," << v_z << ')' << endl;
}