#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    const long double from = 0.0;
    const long double to = 1.0;
    long double integralval1 = 0.0; // result of default program
    long double integralval2 = 0.0; // result of a
    long double integralval3 = 0.0; // result of b
    long double x = from;
    const size_t N = 1000000; // long unsigned int
    const long double step_width = abs(from - to) / (long double)N;
    for (size_t n = 0; n < N; ++n)
    {
        integralval1 += 4 / (1 + x * x);
        integralval3 += 2 * sqrt(x);
        integralval2 += 3 * x * x;
        x += step_width;
    }
    integralval1 /= N; // integralval . dx = integralval . abs(from-to)/N
    integralval2 /= N;
    integralval3 /= N;
    cout << "Result of default program: " << integralval1 << endl;
    cout << "Result of a: " << integralval2 << endl;
    cout << "Result of b: " << integralval3 << endl;

    // program c
    unsigned long int k = 1, sum1 = 0;
    // program d
    unsigned long int i = 1, j = 1, sum2 = 0;
    for (k = 1; k <= 100; k++)
    {
        sum1 += k;
    }
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
        {
            sum2 += i;
        }
    cout << "Result of c: " << sum1 << endl;
    cout << "Result of d: " << sum2 << endl;
    return 0;
}