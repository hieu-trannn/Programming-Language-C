#include <iostream>
#include <stack>
using namespace std;
void viewStack(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << ' ' << stack.top();
        stack.pop();
    }
}
int main()
{
    stack<int> stack;
    cout << "Stack after push 21, 22, 24, 25: ";
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    viewStack(stack);

    cout << "\nStack after pop 2 elements: ";
    stack.pop();
    stack.pop();
    viewStack(stack);
    cout << endl;
    return 0;
}
