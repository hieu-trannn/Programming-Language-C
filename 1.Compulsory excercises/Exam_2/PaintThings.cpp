#include <bits/stdc++.h>
#include "Paint.cpp"
using namespace std;
Retangle deck(20, 30);
Sphere bigBall(15);
Cylinder tank(10, 30);

class PaintThings
{
private:
    Paint P;

public:
    PaintThings(Paint P1) { P = P1; }
    void showDeck() { cout << "The amount of deck is " << P.amount(deck) << endl; }
    void showTank() { cout << "The amount of tank is " << P.amount(tank) << endl; }
    void showBigBall() { cout << "The amount of bigball is " << P.amount(bigBall) << endl; }
    void showAmount()
    {
        cout << "The amount of paint needed for all shapes is " << P.amount(deck) + P.amount(tank) + P.amount(bigBall) << endl;
    }
};
int main()
{
    Paint P(1.23);
    PaintThings PT(P);
    PT.showDeck();
    PT.showBigBall();
    PT.showTank();
    PT.showAmount();
}