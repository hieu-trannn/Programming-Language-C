#include <iostream>
using namespace std;
class ClAsS
{
public:
static int numBorn;
static int numLiving;
ClAsS(){
    numBorn++;
    numLiving++;
}
~ClAsS(){
    numLiving--;
    cout<<"Destructor called"<<endl;
}
void print(){
    cout<<"Number of objects created: "<<numBorn<<endl;
    cout<<"Number of objects living: "<<numLiving<<endl;
}
};
int ClAsS::numBorn = 0;
int ClAsS::numLiving = 0;

int main(){
    ClAsS *o1 = new ClAsS();
    ClAsS *o3 = new ClAsS();
    ClAsS o2;
    delete o3;
    o3->print(); //same as o1-> print
    cout<<"-----------------"<<endl;
    o2.print();
    return 0;
}