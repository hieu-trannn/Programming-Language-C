#include <iostream>
using namespace std;
class Work
{
public:
    Work(float a, float b)
    {
        salary = a;
        hours = b;
    }
    Work(float a)
    {
        salary = a;
        hours = 0;
    }
    void add(float h)
    {
        hours += h;
    }
    float getSalary()
    {
        return salary;
    }
    void printSalary()
    {
        cout << "Luong hien nay: " << hours * salary << endl;
    }
    void reset(Work *w);
    bool subtract(float n)
    {
        if (hours >= n)
        {
            hours -= n;
            return 1;
        }
        else
        {
            return false;
        }
    }

    int compare(Work *v)
    {
        if (v->getSalary() > salary)
        {
            return -1;
        }
        else if (v->getSalary() == salary)
            return 0;
        else
            return 1;
    }
    // Copy Constructor
    Work(Work const *ob)
    {
        this->salary = ob->salary;
        this->hours = ob->hours;
    }

private:
    float salary;
    float hours;
};
void Work::reset(Work *w)
{
    w->hours = 0;
}
int main()
{
    // phuong thuc 1
    Work *w = new Work(20000, 15);
    // phuong thuc 2
    w->add(25);
    // phuong thuc 3
    w->printSalary();
    // phuong thuc 4 (e not sure :D )
    w->Work::reset(w);
    // phuong thuc 5
    bool okay = w->subtract(30);
    // phuong thuc 6
    Work *v = new Work(30000);
    // phuong thuc 7
    int r = w->compare(v);
    // phuong thuc 8
    Work u(v);
    return 0;
}