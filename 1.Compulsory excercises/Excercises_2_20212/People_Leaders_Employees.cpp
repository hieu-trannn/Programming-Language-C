#include <iostream>
using namespace std;
// create an abstract class People,we use its constructer and set function
class People
{
protected:
    int id;
    string name;
    int age;

public:
    virtual void show() = 0;
    People(int a, string b, int c)
    {
        id = a;
        name = b;
        age = c;
    }
    virtual void set(int a, string b, int c)
    {
        id = a;
        name = b;
        age = c;
        cout << "set in People class" << endl;
    }
};
// Class Employees inheritates class People
class Employees;
class Leaders : public People
{
    // private: encapsulation
private:
    int l_id;
    int sal;

public:
    // static variable used to count number of Leaders objects
    static int num_leaders;
    Leaders(int a, string b, int c, int d, int e) : People(a, b, c)
    {
        l_id = d;
        sal = e;
        num_leaders++;
        cout << "------------Leader----------" << endl;
    }
    // set function: if we don't have set function in class Leaders,
    // Object will return set function in class People
    void set(int a, string b, int c)
    {
        id = a;
        name = b;
        age = c;
        cout << "set in Leaders class" << endl;
    }
    // Polymorphism: 2 functions set with different types of parameters
    void set(int d, int e)
    {
        l_id = d;
        sal = e;
    }
    //
    void show()
    {
        cout << "Personal id: " << id << endl
             << "Name: " << name << endl
             << "Age: " << age << endl;
        cout << "Leader id: " << l_id << endl
             << "Leader Salary: " << sal << endl;
    }
    // static function prints number of objects
    static void get_no_leaders()
    {
        cout << "Number of Leaders Objects: " << num_leaders << endl;
    }
    // Polymorphism: 2 functions getsalary
    void getsalary()
    {
        cout << "Leader salary: " << sal << endl;
    }
    void getsalary(Employees x);
};
// Class Employee is same as class Leaders
class Employees : public People
{
private:
    int e_id;
    int sal;

public:
    static int num_employees;
    Employees(int a, string b, int c, int d, int e) : People(a, b, c)
    {
        e_id = d;
        sal = e;
        num_employees++;
        cout << "------------Employee----------" << endl;
    }
    void set(int d, int e)
    {
        e_id = d;
        sal = e;
    }
    void show()
    {
        cout << "Personal id: " << id << endl
             << "Name: " << name << endl
             << "Age: " << age << endl;
        cout << "Employee id: " << e_id << endl
             << "Employee Salary: " << sal << endl;
    }
    static void get_no_employees()
    {
        cout << "Number of Employees Objects: " << num_employees << endl;
    }
    // friend function: function getsalary in class Leaders can access member of Employees
    friend void Leaders::getsalary(Employees x);
};
void Leaders::getsalary(Employees x)
{
    cout << "Employee salary: " << x.sal << endl;
}
// initialize static variables
int Leaders::num_leaders = 0;
int Employees::num_employees = 0;
int main()
{
    Leaders l(1, "Hieu", 19, 230, 3000);
    Employees e(1, "Hieu", 19, 230, 3000);
    l.set(4, "Hieudz", 19);
    l.show();
    e.show();
    l.getsalary();
    l.getsalary(e);

    //class People: virtual
    People *p = new Leaders(2, "Hieu2", 20, 0231, 4000);
    p->set(9, "Hieunew", 20);
    p->show();
    e.get_no_employees();
    l.get_no_leaders();
    // p->get_no_leaders(); : error: class People doesn't have function get_no_leaders
    return 0;
}
