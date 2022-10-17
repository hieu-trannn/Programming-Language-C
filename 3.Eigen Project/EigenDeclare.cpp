#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
    // define 3x3 matrix of floats and set its entries to zero -explicit declaration
    Matrix<float, 3, 3> matrixA;
    Matrix3f matrixA1; // is another way to define 3x3 matrix with type float
    // The extension “3f” in “Matrix3f” stands for “3 x 3” matrix of floats. If we would like to define a
    // 4×4 matrix of integers, the typedef notation would be Matrix4i.
    matrixA.setZero();
    matrixA1.setZero();
    cout << "Matrix A" << endl
         << matrixA << endl
         << "Matrix A1" << endl
         << matrixA1 << endl;

    // //MatrixXf is a typedef declaration in which character “X” stands for unknown size and "f" stands for float
    // MatrixXd matrixB1(3,3);
    // matrixB1.setZero();
    // cout<<"Matrix B1"<<endl<<matrixB1<<endl;
    // MatrixXd matrixB2;
    // matrixB2.resize(3,4);
    // matrixB2.setZero();
    // cout<<"Matrix B2"<<endl<<matrixB2<<endl;
    // return 0;
}