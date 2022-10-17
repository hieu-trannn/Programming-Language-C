#include <bits/stdc++.h>
using namespace std;

template <class Integer>
class Rational
{
private:
    Integer numerator;
    Integer denominator;

public:
    // Reduce Frac
    void reduce()
    {
        if ((numerator < 0 && denominator < 0) || (denominator < 0))
        {
            this->numerator = -numerator;
            this->denominator = -denominator;
        }
        else
        {
            this->numerator = numerator;
            this->denominator = denominator;
        }
        Integer a, b;
        a = abs(numerator);
        b = abs(denominator);
        while (a - b != 0)
        {
            a = a - b * (a > b);
            b = b - a * (b > a);
        }
        this->numerator = numerator / a;
        this->denominator = denominator / a;
    }
    Rational()
    {
        numerator = 0;
        denominator = 1;
    }
    // Parameterized Constructor
    Rational(Integer num1, Integer num2)
    {
        numerator = num1;
        denominator = num2;
        reduce();
    }
    // Copy Constructor
    Rational(Rational const &obj)
    {
        this->numerator = obj.numerator;
        this->denominator = obj.denominator;
    }
    // Move Constructor
    Rational(Rational &&obj)
    {
        this->numerator = obj.numerator;
        this->denominator = obj.denominator;
        obj.numerator = 0;
        obj.denominator = 0;
    }
    // Copy Asignment
    Rational operator=(Rational const &obj)
    {
        this->numerator = obj.numerator;
        this->denominator = obj.denominator;
        return *this;
    }
    // Get data
    Integer getnume() { return numerator; }
    Integer getdeno() { return denominator; }
    // Move Asignment
    Rational operator=(Rational const &&obj)
    {
        this->numerator = obj.numerator;
        this->denominator = obj.denominator;
        return *this;
    }

    // Operator +
    Rational operator+(Rational const &obj)
    {
        Rational res;
        res.numerator = numerator * obj.denominator + denominator * obj.numerator;
        res.denominator = denominator * obj.denominator;
        res.reduce();
        return res;
    }
    // Operator -
    Rational operator-(Rational const &obj)
    {
        Rational res;
        res.numerator = numerator * obj.denominator - denominator * obj.numerator;
        res.denominator = denominator * obj.denominator;
        res.reduce();
        return res;
    }
    // Operator *
    Rational operator*(Rational const &obj)
    {
        Rational res;
        res.numerator = numerator * obj.numerator;
        res.denominator = denominator * obj.denominator;
        res.reduce();
        return res;
    }
    // Operator /
    Rational operator/(Rational const &obj)
    {
        Rational res;
        res.numerator = numerator * obj.denominator;
        res.denominator = denominator * obj.numerator;
        res.reduce();
        return res;
    }
    // Operator +=
    Rational operator+=(Rational const &obj)
    {
        *this = *this + obj;
        return *this;
    }
    // Operator -=
    Rational operator-=(Rational const &obj)
    {
        *this = *this - obj;
        return *this;
    }
    // Operator *=
    Rational operator*=(Rational const &obj)
    {
        *this = *this * obj;
        return *this;
    }
    // Operator /=
    Rational operator/=(Rational const &obj)
    {
        *this = *this / obj;
        return *this;
    }
    explicit operator double() const
    {
        return static_cast<double>(numerator) / denominator;
    }
};
// show function
template <class Integer>
void showfrac(Rational<Integer> frac)
{
    cout << frac.getnume() << "/" << frac.getdeno() << endl;
};

Rational<int> ra_obj()
{
    Rational<int> res(1, 2);
    return res;
}

int main()
{
    Rational<int> frac1(12, 26);    // Test Parameterized Constructor
    Rational<int> frac2 = frac1;    // Test Copy Constructor
    Rational<int> frac3 = ra_obj(); // Test Move Constructor
    Rational<int> frac4;            // Test default Constructor
    Rational<int> frac5(7, 18);

    cout << "Test value after Constructor" << endl;
    {
        cout << "frac1 = ";
        showfrac(frac1);
        cout << "frac2 = ";
        showfrac(frac2);
        cout << "frac3 = ";
        showfrac(frac3);
        cout << "frac4 = ";
        showfrac(frac4);
        cout << "frac5 = ";
        showfrac(frac5);
    }
    cout << "=====================================" << endl
         << "OPERATOR +, -, *, / TEST \n";
    {
        cout << "frac1 = ";
        showfrac(frac1);
        cout << "frac5 = ";
        showfrac(frac5);
        cout << "frac1 + frac5 = ";
        showfrac(frac1 + frac5);
        cout << "frac1 - frac5 = ";
        showfrac(frac1 - frac5);
        cout << "frac1 * frac5 = ";
        showfrac(frac1 * frac5);
        cout << "frac1 / frac5 = ";
        showfrac(frac1 / frac5);
    }
    cout << "=====================================" << endl
         << "OPERTATOR +=, -=, *=, /= TEST \n";
    {
        cout << "frac1 = ";
        showfrac(frac1);
        cout << "frac5 = ";
        showfrac(frac5);
        cout << "frac1 after += frac5 ";
        frac1 += frac5;
        showfrac(frac1);
        cout << "frac1 after -= frac5 ";
        frac1 -= frac5;
        showfrac(frac1);
        cout << "frac1 after *= frac5 ";
        frac1 *= frac5;
        showfrac(frac1);
        cout << "frac1 after /= frac5 ";
        frac1 /= frac5;
        showfrac(frac1);
    }
    cout << "=====================================" << endl
         << "TO DOUBLE TEST \n";
    cout << "frac1 = ";
    showfrac(frac1);
    cout << "frac 1 to dobule: " << double(frac1) << endl;
    return 0;
}