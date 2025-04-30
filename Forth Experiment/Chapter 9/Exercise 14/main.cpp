#include <iostream>

using namespace std;

class A
{
public:
    inline A(int i) : a(i) {}

private:
    int a;
};

class B
{
public:
    inline B(int i) : obj(i) {}

    void func()
    {
        cout << "B Function called" << endl;
    }

private:
    A obj;
};

int main()
{
    // B arr[10];
    B b(10);
    b.func(); // This should print "B Function called"

    return 0;
}