// use Eigen Matrix to solve electrical circuit theory's problem
#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
    // define matrices
    MatrixXf Resistances(3, 3);
    MatrixXf Voltages(3, 1);
    MatrixXf Currents(3, 1);
    // Resistances*Currents = Voltages

    // inverse of matrix Resistances
    MatrixXf Res_inverse(3, 3);

    // define variables
    float R1, R2, R3, R4, R5, E1;
    R1 = R2 = R3 = R4 = R5 = 10;
    E1 = 10;

    // put information
    Resistances << (R1 + R3 + R4), (-R1), (-R3),
                    (-R1 + 5), (R1 + R2), (-R2),
                    (-R3), (-R2), (R2 + R3 + R5);
    Voltages << (-E1),
                  0,
                  0;

    // Currents = Res_inverse*Voltage
    // compute Currents
    Res_inverse = Resistances.inverse();
    Currents = Res_inverse * Voltages;

    // print Currents
    cout << "Currents Iv1 Iv2 Iv3 of cicuit are: " << endl
         << Currents << endl;
    return 0;
}