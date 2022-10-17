#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
    // basic matrix operations
    // matrix addition
    MatrixXd A1(2, 2);
    MatrixXd B1(2, 2);
    A1 << 1, 2,
          3, 4;
    B1 << 3, 4,
        5, 6;
    MatrixXd C1 = A1 + B1;
    cout << " \n\n The sum of A1 and B1 is\n\n"
         << C1 << endl;
    // similarly you can subtract A1 and B1
    // matrix multiplication
    MatrixXd D1 = A1 * B1;
    cout << " \n\n The matrix product of A1 and B1 is\n\n"
         << D1 << endl;
    // multiplication by a scalar
    int s1 = 2;
    MatrixXd F1;
    F1 = s1 * A1;
    cout << " \n\n The matrix product of the scalar 2 and the matrix A1 is\n\n"
         << F1 << endl;


    // MatrixXd A1(4, 4);
    // A1 << 1, 3, 2, 1,
    //     0, 1, -1, -1,
    //     0, 0,  1,  3,
    //     0, 0,  0,  1;
    // // matrix transpose
    // MatrixXd At;
    // // we can obain a transpose of A1 as follows
    // At = A1.transpose();
    // cout << "\n\n Original matrix A1\n\n"
    //      << A1;
    // cout << "\n\n Its transpose\n\n " << At << endl;
    // MatrixXd G1;
    // G1 = A1.inverse();
    // cout << "\n\n The inverse of the matrix A1 is\n\n"
    //      << G1;
    // cout << "\n\n Double check A1^{-1}*A1=\n\n"
    //      << G1 * A1<<endl;
}