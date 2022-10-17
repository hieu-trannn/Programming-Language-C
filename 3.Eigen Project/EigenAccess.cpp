#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
    Matrix4f matrixD;
    // access entries of a matrix
    matrixD << 1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12,
        13, 14, 15, 16;
    cout << "MatrixD:" << endl
         << matrixD << endl;


    // //setting matrix entries - two approaches 
    // int rowsNumber = 5;
    // int columnNumber = 5;
    // // matrix of zeros
    // MatrixXf matrix1zeros;
    // matrix1zeros = MatrixXf::Zero(rowsNumber, columnNumber);
    // cout << "matrix1zeros: " << endl
    //      << matrix1zeros << endl;
    // // another option:
    // MatrixXf matrix1zeros1;
    // matrix1zeros1.setZero(rowsNumber, columnNumber);
    // cout << "matrix1zeros1: " << endl
    //      << matrix1zeros1 << endl;
    // // matrix of ones
    // MatrixXf matrix1ones;
    // matrix1ones = MatrixXf::Ones(rowsNumber, columnNumber);
    // cout << "matrix1ones: " << endl
    //      << matrix1ones << endl;
    // // another option
    // MatrixXf matrix1ones1;
    // matrix1ones1.setOnes(rowsNumber, columnNumber);
    // cout << "matrix1ones1: " << endl
    //      << matrix1ones1 << endl;
    // //matrix of constants
    // float value = 4.0;//Linh's GPA
    // MatrixXf matrix1const;
    // matrix1const = MatrixXf::Constant(rowsNumber, columnNumber,value);
    // cout << "matrix1const: "<<endl<< matrix1const << endl;
    // //another option
    // MatrixXf matrix1const1;
    // matrix1const1.setConstant(rowsNumber, columnNumber, value);
    // cout << "matrix1const1: "<<endl<< matrix1const1 << endl;


    // // accessing matrix blocks
    // MatrixXd matrixV(4, 4);
    // matrixV << 101, 102, 103, 104,
    //     105, 106, 107, 108,
    //     109, 110, 111, 112,
    //     113, 114, 115, 116;
    //  // access the matrix composed of 1:2 rows and 1:2 columns of matrixV
    // MatrixXd matrixVpartition = matrixV.block(0, 0, 2, 2);
    // cout << "\n \n"
    //      << matrixVpartition << endl;
    // // start with element [1,1], block has 3 columns and 3 rows
    // MatrixXd matrixVpartition2 = matrixV.block(1, 1, 3, 3);
    // cout << "\n \n"
    //      << matrixVpartition2 << endl;
    // // accessing columns and rows of a matrix
    // cout << "\n\n"
    //      << "Row 1 of matrixV is \n " << matrixV.row(0);
    // cout << "\n\n"
    //      << "Column 1 of matrixV is \n"
    //      << matrixV.col(0)<<endl;
}