#include <iostream>
#include <math.h>
using namespace std;
class Quadrilateral{
    public:
    // create object for Inscribed_Qua inheritates
    Quadrilateral(float l1, float l2, float l3, float l4){
        length1 = l1;
        length2 = l2;
        length3 = l3;
        length4 = l4;
    }
    void set(float l1, float l2, float l3, float l4){
        length1 = l1;
        length2 = l2;
        length3 = l3;
        length4 = l4;
    }
    float P(){
        return length1+length2+ length3+ length4;
    }
     virtual float Area() = 0;
    protected:
    float length1;
    float length2;
    float length3;
    float length4;
};
class Inscribed_Quadrilateral : public Quadrilateral
{
    public:
    Inscribed_Quadrilateral(float l1, float l2, float l3, float l4):Quadrilateral(l1,l2,l3,l4){}
    float HalfP = (length1+length2+length3+length4)/2;
    //(Tieng Viet) Da hinh: ghi them 1 ham ten giong het ham cha (Quadrilateral), ham Area trong (Quadrilateral) la ao
    virtual float Area(){
    return sqrt((HalfP-length1)*(HalfP-length2)*(HalfP-length3)*(HalfP-length4));
    }
};
class Rectangle: public Inscribed_Quadrilateral {
    public:
    //constructor initialized: length1,3 => width, length2,4 => length
    Rectangle(float a, float b, float c, float d):Inscribed_Quadrilateral(a,b,c,d){}
    float Area(){
        return length1*length2;
    }
};
int main(){
    Inscribed_Quadrilateral IQ(3,3,3,3);
    Rectangle R(2,3,2,3);
    cout<<"Perimeter of Inscribed Quadrilateral: "<<IQ.P()<<endl;
    cout<<"Perimeter of Rectangle: "<<R.P()<<endl;
    cout<<"Area of Inscribed Quadrilateral: "<<IQ.Area()<<endl;
    cout<<"Area of Rectangle: "<<R.Area()<<endl;
    return 0;
}