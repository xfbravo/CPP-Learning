#include <iostream>

using namespace std;

class T1
{
private:
    int a = 1;
    friend void func(T1 &t1);
    friend class T2; // T2 is a friend of T1
};

class T2
{
public:
    T1 t1; // T2 has a member of type T1
    void test()
    {
        cout << t1.a << endl; // Accessing private member 'a' of class T1
    }
    T2(T1 t1) : t1(t1) {} // Constructor that initializes t1
};

class T3
{
    friend void func(T1 &t1);
};
void func(T1 &t1)
{
    cout << t1.a << endl; // Accessing private member 'a' of class T1
    t1.a = 10;            // Modifying private member 'a' of class T1
    cout << t1.a << endl; // Output: a = 10
}

int main()
{
    T1 t1;
    T2 t2(t1); // Create an instance of T2 with t1 as a member
    t2.test(); // Call the method of T2 to access private member 'a' of T1
    func(t1);  // Call the friend function to modify private member 'a'
    return 0;
}