#include <iostream>

using namespace std;

class Test
{
public:
    int data = 1;
    int func1()
    {
        return data;
    }

    int func2() const
    {
        return data + 1;
    }
};

int main()
{
    Test t1;
    const Test t2;
    cout << t1.func1() << endl; // 1
    cout << t2.func2() << endl; // 2
    cout << t1.func2() << endl; // 2
    // cout << t2.func1() << endl; // Error: 'this' argument to member function 'func1' is of non-class type 'const Test'
    return 0;
}