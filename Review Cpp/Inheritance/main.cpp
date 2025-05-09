#include <iostream>

using namespace std;

// class A
// {
// public:
//     int i;

// private:
//     int j;
// };

// class B : public A{
// public:
//     int k;
//     void func(){
//         i += 2;
//     }
//     void display(){
//         cout<<"B::k: "<<k<<"\nA::i : "<<i<<endl;
//     }
// };
// int main()
// {
//     A a;
//     B b;
//     b.func();
//     b.k = 10;
//     b.display();
//     return 0;
// }

class Base
{
public:
    int f()
    {
        cout << "Base::f() called" << endl;
        return 1;
    }
    int f(string s)
    {
        cout << "Base::f(string) called" << endl;
        return 1;
    }
    void g()
    {
        cout << "Base::g() called" << endl;
    }
};
class Derived1 : public Base
{
public:
    void g() const {}
};
class Derived2 : public Base
{
public:
    // Redefinition:
    int f() const
    {
        cout << "Derived2::f()\n";
        return 2;
    }
};
class Derived3 : public Base
{
public:
    // Change return type:
    void f() const
    {
        cout << "Derived3::f()\n";
    }
};
class Derived4 : public Base
{
public:
    // Change argument list:
    int f(int) const
    {
        cout << "Derived4::f()\n";
        return 4;
    }
};

void main()
{
    string s("hello");
    Derived1 d1;
    int x = d1.f();
    d1.f(s);
    Derived2 d2;
    x = d2.f();
    //! d2.f(s); // string version hidden
    Derived3 d3;
    //! x = d3.f(); // return int versionhidden
    Derived4 d4;
    //! x = d4.f(); // f() version hidden
    x = d4.f(1);
} ///:~